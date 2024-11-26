#include <stdio.h>

//   c7 45 e8 01 00 00 00    movl   $0x1,-0x18(%rbp)   var1 = 1
//   c7 45 ec 0a 00 00 00    movl   $0xa,-0x14(%rbp)   var2 = 10
//   c7 45 f0 08 00 00 00    movl   $0x8,-0x10(%rbp)   var3 = 8
//   c7 45 f4 1d 00 00 00    movl   $0x1d,-0xc(%rbp)   var4 = 29
//   c7 45 f8 41 00 00 00    movl   $0x41,-0x8(%rbp)   var5 = 65

int main() {
    int var1 = 1;
    int var2 = 10;
    int var3 = 8;
    int var4 = 29;
    int var5 = 65;

    int var6 = var1 * 4 + (var2 + var3 + var4 + var5);

    printf("%d", var6);
    
    return 0;
}