#include <stdio.h>
#include <stdlib.h>     // memory alloc functions

int main(){
    int *p = malloc(10 * sizeof(int));   // malloc(要分配的字节数)，memory allocate
    // 向OS在程序堆上申请内存, 返回指向这个内存的首地址指针

    // Routine: 检查是否分配成功
    if (p == NULL)
        printf("Error allocating memory for pointer p");

    *p = 12;

    printf("%d\n", *p);

    free(p);    // 释放指针占用，不然会造成内存泄漏
    // 内存泄漏：OS的可用内存泄露到了程序中而没有被使用
    // 而且其他程序在这个程序结束前还用不了泄漏的内存，因此得名泄漏

    return 0;
}