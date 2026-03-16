#include <stdio.h>

int shared = 10;    // declared in file scope, visible to all other scope
// file scope var 全局变量，尽量避免使用（防止可能的认知上的懒惰让结构混乱）


void func1(){
    shared += 100;
}

void func2(){
    printf("%d\n", shared);
}

int main(){
    func1();
    func2();

    return 0;
}