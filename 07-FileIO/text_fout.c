#include <stdio.h>

int main(){
    FILE *fp;
    int x = 32;

    fp = fopen("./output.txt", "w");

    fputc('B', fp); // 往指针位置写一个字符，然后指针位置后移动一个字节
    fputc('\n', fp);

    // 格式化输出
    fprintf(fp, "x = %d\n", x);

    fputs("Hello, world!\n", fp);   // 直接往fp指针喷入字符串

    fclose(fp);
    fp = NULL;

    return 0;
}