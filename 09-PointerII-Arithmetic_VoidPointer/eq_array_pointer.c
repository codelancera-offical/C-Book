#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5};

    int *p = a;

    for (int i = 0; i < 5; i++)
        printf("a[i]: %d\n", a[i]);

    for (int i = 0; i < 5; i++)
        printf("p[i]: %d\n", p[i]);

    for (int i = 0; i < 5; i++)
        printf("*(a + %d): %d\n", i, *(a + i));

    for (int i = 0; i < 5; i++)
        printf("*(p + %d): %d\n", i, *(p + i));

    for (int i = 0; i < 5; i++)
        printf("p[i]: %d\n", *(p++));  // printf("a[i]: %d\n", a++) will ve Error, can move an array var

    return 0;

}