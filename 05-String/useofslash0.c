#include <stdio.h>

int main(){
    // 申请 5 个字节，正好塞满 Hello，不给 \0 留位置
    char s[5] =  {'H', 'e', 'l', 'l', 'o'};
    printf("%s\n", s);
    return 0;

    // printf 打印完 o 之后，因为没有看到 \0，它会继续往内存的后面读！它会把紧挨着这个数组后面的内存垃圾全当成字符打印出来。
}