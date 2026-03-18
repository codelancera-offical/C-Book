#include <stdio.h>

int main(){
    int a = 0x1A2B; // 0x1a2b is same, hexadecimal
    printf("var a in hex: %x\n", a);
    printf("var a in decimal: %d\n", a);

    // if you lead a number with a `0`, it's an octal number
    int b = 012;
    printf("var b in octal: %o\n", b);
    printf("var b in decimal: %d\n", b);

    // start with 0b, binary number
    int c = 0b111;  // 7 in decimal
    // printf("var c in binary: %b\n", c); this will not work
    printf("var c in decimal: %d\n", c);

    // scientific notation
    printf("123456.0 in sci notation: %e\n", 123456.0);
    double x = 123.456e+10;
    printf("var x in sci notation: %e\n", x);

    return 0;
}