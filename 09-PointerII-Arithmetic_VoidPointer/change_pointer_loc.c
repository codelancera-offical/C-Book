#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5, -1};

    int *p = a;

    while (*p != -1){
        printf("%d\n", *p);
        p++;    // The pointer move forward for 1 sizeof int (4 Bytes)
    }

    return 0;
}