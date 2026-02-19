#include <stdio.h>
#include <string.h> // strlen

size_t mech_strlen(char *s){
    size_t count = 0;
    while (s[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    char s[] = "Hello World!"; // 12 chars + \0 = 13 Bytes
    printf("The string is %zu bytes long by strlen func\n", strlen(s)); // it will not count the \0
    printf("The string is %zu bytes long by mech_strlen func\n", mech_strlen(s)); // same to above

    return 0;
}