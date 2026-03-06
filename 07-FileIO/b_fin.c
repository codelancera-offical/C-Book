#include <stdio.h>

int main(){
    FILE *fp;
    unsigned char c;

    fp = fopen("./output.bin", "rb");   // read as bianry

    // fread是一个铲车，返回刚才铲了几块数据单元
    while (fread(&c, sizeof(char), 1, fp) != 0){ // 从fp指针读一个字节大小到c变量的地址中
        printf("%d\n", c);  // 以字符打印
    }

    fclose(fp);
    fp = NULL;

    return 0;
}