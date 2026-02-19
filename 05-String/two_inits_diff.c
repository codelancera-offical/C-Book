#include <stdio.h>

int main(){
    char *s1 = "abcdef";
    printf("s1: %s\n", s1);

    char s2[] = "ghijkl";
    printf("s2: %s\n", s2);

    // s1[0] = 'A'; This can not be exec, because it's a pointer to the .rodata section of the memory, which is read-only, and it will cause a segmentation fault if we try to modify it.
    // *s1 = 'A'; This also can nott be exec.
    printf("first char of s1: %c\n", s1[0]);

    printf("Size of s1: %zu Bytes\n", sizeof(s1)); // it will be 8, even it only has 6 char, because it's a pointer to the heap
    printf("Size of s2: %zu Bytes\n", sizeof(s2)); // 6 + 1(\0) Bytes = 7 Bytes, const point to stack!

    // The modify to s2 is OK
    s2[0] = 'G';
    printf("s2 after modified: %s\n", s2);

    return 0;

}

