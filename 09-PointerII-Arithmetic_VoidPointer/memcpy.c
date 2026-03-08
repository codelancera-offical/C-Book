#include <stdio.h>
#include <string.h> // memcpy

int main(){
    char s[] = "Goats!";
    char t[100];

    memcpy(t, s, 7);    // copy 7 Bytes from source to target location

    printf("%s\n", t); 

    int a[] = {11, 22, 33};
    int b[3];

    memcpy(b, a, 3 * sizeof(int));   // copy 3 * sizeof(int) Bytes from a to b
    for (int i = 0; i < 3; i++)
        printf("%d\n", b[i]);

    return 0;
}