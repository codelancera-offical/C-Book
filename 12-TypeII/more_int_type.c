#include <stdio.h>
#include <limits.h> // 引入此头文件以获取各类型的极限值宏

int main() {
    printf("===================== Size of Int Types on your OS ===========mo===========\n");
    // 使用 %-20s 等格式化控制符，让输出左对齐，形成整齐的表格
    printf("%-20s %-10s %-25s %s\n", "Type", "Bytes", "Minimum Value", "Maximum Value");
    printf("-------------------------------------------------------------------------\n");

    // char (注意：char 默认是有符号还是无符号取决于编译器，但 CHAR_MIN/MAX 会自动适配)
    printf("%-20s %-10zu %-25d %d\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    
    // unsigned char
    printf("%-20s %-10zu %-25u %u\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);
    
    // short
    printf("%-20s %-10zu %-25d %d\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    
    // unsigned short
    printf("%-20s %-10zu %-25u %u\n", "unsigned short", sizeof(unsigned short), 0, USHRT_MAX);
    
    // int
    printf("%-20s %-10zu %-25d %d\n", "int", sizeof(int), INT_MIN, INT_MAX);
    
    // unsigned int
    printf("%-20s %-10zu %-25u %u\n", "unsigned int", sizeof(unsigned int), 0, UINT_MAX);
    
    // long
    printf("%-20s %-10zu %-25ld %ld\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
    
    // unsigned long
    printf("%-20s %-10zu %-25lu %lu\n", "unsigned long", sizeof(unsigned long), 0UL, ULONG_MAX);
    
    // long long
    printf("%-20s %-10zu %-25lld %lld\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    
    // unsigned long long
    printf("%-20s %-10zu %-25llu %llu\n", "unsigned long long", sizeof(unsigned long long), 0ULL, ULLONG_MAX);

    return 0;
}