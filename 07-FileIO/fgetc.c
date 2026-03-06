#include <stdio.h>

int main(){
    FILE *fp;                       // 具象化一个文件指针

    fp = fopen("./helloworld.txt", "r"); // fopen自动机，接受两个参数，返回该文件地址
    // 调用 fopen() 的时候，C 语言其实在后台偷偷用 malloc() 在堆内存里申请了一块空间，用来存放 FILE 这个结构体
    // 里面装着缓冲区、文件状态、文件描述符等各种信息，然后把这块空间的地址交给了你的 fp。 
    
    while(1){
        int c = fgetc(fp);  // fgetc自动机，先从文件指针位置读一个字节（一个字符一个字节）强转为unsigned char，然后再强转为int，指针向后移动一个字节
        if (c != EOF){  // EOF是文件读的超过文件字节的时候操作系统自动返回的一个int值-1
            printf("%c", c);
        }
        else{
            break;
        }
    }

    fclose(fp);         // 缓冲区清空写入，解除文件编号读写锁，调用 free() 把这块 FILE 结构体占用的内存还给系统。
    fp = NULL;          // 置为空指针，防止后续误操作（高手肌肉记忆）
}