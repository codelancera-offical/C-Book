#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("./output.bin", "wb");   // write as bianry

    unsigned char bytes[5] = {99, 255, 153, 231, 49};

    // fwrite 自动机参数
    // 1. 要写入数据的指针
    // 2. 每一个数据单位的字节大小 size_t
    // 3. 有几个数据单位要写
    // 4. 要写入的文件指针

    fwrite(bytes, sizeof(char), 5, fp);

    fclose(fp);
    fp = NULL;

    return 0;
}