#include <stdio.h>
#include <string.h> // strcpy

int main(){
    char s[] = "Hello World!";
    char *t;

    t = s;
    t[0] = 'z';
    printf("The string of s: %s, failed to copy string to f because it only copy address\n", s);
    t[0] = 'H';
    printf("Reset s to \"Hello World!\"\n");
    
    char target[100]; // ensure the space is enough to copy
    strcpy(target, s); // target <- s, copy to Byte by Bytes
    printf("The string of s: %s\n", s);
    target[0] = 'z';
    printf("The string of z: %s\n", target);

    return 0;
}