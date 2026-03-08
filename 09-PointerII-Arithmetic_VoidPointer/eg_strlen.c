#include <stdio.h>

int my_strlen(char *s){
    char *p = s;

    while(*p != '\0'){
        p++;
    }

    return p - s;   // return  [BytesPos(p) - BytesPos(s)] // SIZE OF Pointer Type
}

int main(){
    printf("The strlen of \"Hello World!\" is %d.\n", my_strlen("Hello World!"));
    
    char s[] = "Haonan Tang";
    char *t = "Nathan Tang";

    printf("The strlen of \"Haonan Tang\" is %d.\n", my_strlen(s));
    printf("The strlen of \"Nathan Tang\" is %d.\n", my_strlen(t));
    // char s[] and char *t both work for strlen

    return 0;
}