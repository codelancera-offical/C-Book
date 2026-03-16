#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++){
        int i = 999; // 隐藏 for loop中的i，但是没有改变
        printf("%d\n", i);
    }
    // 变量同名时，优先使用作用域最近的变量（就近原则）
    return 0;
}