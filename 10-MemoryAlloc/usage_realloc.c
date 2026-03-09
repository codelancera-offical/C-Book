#include <stdio.h>
#include <stdlib.h>

char *readline(FILE *fp){
    int offset = 0;     // index nex char goes in the buffer
    size_t bufsize = 4;    // initial buffer size
    char *buf;          // the pointer of buffer
    int c;              // the char we have read in by fgetc

    buf = malloc(bufsize * sizeof(char));

    if (buf == NULL){
        printf("Buf fail to initialize.\n");
        return NULL;
    }

    /*在 C 语言中，逗号 , 不仅仅是用来分隔函数参数的，它还是一个运算符。
    它的规则非常简单粗暴：
    从左到右依次计算每一个表达式。
    丢弃左边表达式的结果。
    返回最后一个表达式的结果作为整个组合的值。
    所以，while (表达式A, 表达式B) 的意思其实是：
    “先做 A，再看 B。能不能循环，全看 B 的脸色。”*/
    while(c = fgetc(fp), c != '\n' && c != EOF){
        if (offset == bufsize - 1){ // after this char comes in, the buf will be full
            bufsize *= 2;   // 2x the space

            char *new_buf = realloc(buf, bufsize);
            
            if (new_buf == NULL){
                free(buf);
                printf("Buf fail to expand.\n");
                return NULL;
            }

            buf = new_buf;
        }
        buf[offset++] = c;
    }

    if (c == EOF && offset == 0){
        free(buf);
        return NULL;    // 读完了，没东西打印了
    }

    // 还没读完（没到EOF），调整缓冲区大小
    if (offset < bufsize - 1){  // 如果缓冲区还没满
        char *new_buf = realloc(buf, offset + 1); // 给\0留空间，同时把多占用的内存放掉
    
        if (new_buf != NULL)
            buf = new_buf;
    }

    buf[offset] = '\0';

    return buf;
}

int main(){
    FILE *fp = fopen("foo.txt", "r");
    char *line; 

    while ((line = readline(fp)) != NULL){
        printf("%s\n", line);
        free(line);
    }

    fclose(fp);
    return 0;
}