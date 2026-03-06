#include <stdio.h>

int main(){
    FILE *fp;
    char s[1024];           // 读取缓冲区
    int linecount = 0;

    fp = fopen("./quote.txt", "r");

    while(fgets(s, sizeof(s), fp) != NULL){ // fgets是读完\n之后才刷新
        linecount += 1; // 注意！这个 linecount 根本不是什么“真实行数”，它确确实实只是 fgets 这台机械臂的“启动次数”！
        printf("%d: %s", linecount, s);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}