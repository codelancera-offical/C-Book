#include <stdio.h>
#include <stdlib.h>

int main(){
    float *p = malloc(20 * sizeof(float));

    for (int i = 0; i < 20; i++)
        p[i] = i / 20.0;

    // 现在想把 *p 的容量扩充到40个float, 就需要使用realloc
    float *new_p = realloc(p, 40 * sizeof(float));
    // realloc机制
    // 1. 开一个新的40float地址
    // 2. 把p指向的地址直接memcpy 40 float 内存过去
    // 3. 返回新的内存地址

    if (new_p == NULL){
        printf("Error reallocing\n");
        return 1;
    }

    p = new_p;

    for (int i = 20; i < 40; i++){
        p[i] = 1.0 + (i - 20) / 20.0;
    }

    for (int i = 0; i < 40; i++)
        printf("%.2f\n", p[i]);

    free(p);
    
    return 0;
        
}