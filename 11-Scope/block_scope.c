#include <stdio.h>

int main(){
    int a = 12;

    // example 1
    if (a == 12){   // this is a block scope
        int b = 99;
        printf("%d %d\n", a, b);
    }

    printf("%d\n", a);  // OK， still in a scope
    // printf("%d\n", b);  // that's illegal, out of b's scope

    // example 2, directly create a block scope using {}
    {
        int b = 10;
        printf("%d\n", b);     
    }
    // printf("%d\n", b);  // that's illegal, out of b's scope

    return 0;
}