#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("./whales.txt", "r");

    char name[1024];
    float length;
    int mass;

    // file scan formatted， %s, %f, %d 是 fscanf自动机调用的不同机械抓手
    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF){    // 要把读进来的量存进变量名对应的地址中
        printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}