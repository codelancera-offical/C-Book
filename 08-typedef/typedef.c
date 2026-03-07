#include <stdio.h>

typedef int c_int;    // typedef 用法: typedef 类型 别名
typedef float c_float;

typedef struct{ // 匿名结构体，可以直接用Human别名调用
    c_int age;
    c_float height;
    c_float weight;
} Human;


int main(){
    Human thn = {.age=22, .height=188.00, .weight=76.00};
    fprintf(stdout, "Thn is %d years old, %.2f cm, and %.2f kg.", thn.age, thn.height, thn.weight);
    return 0;
}