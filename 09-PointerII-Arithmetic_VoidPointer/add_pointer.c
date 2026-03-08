#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};

    int *p = &a[0]; // int *p = a 等价

    printf("*p: %d\n", *p);
    printf("*(p + 1): %d\n", *(p+1)); // Deference the value forward of pointer for 1 sizeof(int)

    for (int i = 0; i < 5; i++){
        printf("*(p + %d): %d\n", i, *(p + i));
    }

    return 0;
}