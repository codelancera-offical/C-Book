#include <stdio.h>
#include <string.h>
/*
在 C 语言中，void * 被称为“通用指针”。它有以下两个特性：
隐式转换： 任何类型的指针（如 int *, double *, struct MyStruct *）都可以被隐式转换为 void * 而不需要强制类型转换。
抹除类型： void * 只代表一个内存地址，它不关心该地址处存储的是什么数据。
当你在函数内部将其转换为 char * 时，你实际上是在告诉编译器：“请把这块内存看作是一个字节一个字节的序列。”
*/

void *my_memcpy(void *dest, void *src, size_t byte_count){
    char *s = src;
    char *t = dest;

    while (byte_count--){
        *(t++) = *(s++);
    }
    
    return dest;
}

int main(){
    char s[] = "Don't do things for me without my permission, fucking AI.";

    char t[100];

    my_memcpy(t, s, strlen(s) * sizeof(char));
    printf("%s\n", t);

    return 0;
}


// 这样就不用每一个类型的复制都写一遍了
// memcpy_int(int *a, int *b, int count);
// memcpy_float(float *a, float *b, int count);
// memcpy_double(double *a, double *b, int count);
// memcpy_char(char *a, char *b, int count);
// memcpy_unsigned_char(unsigned char *a, unsigned char *b, int count); 