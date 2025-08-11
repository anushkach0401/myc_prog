#include <stdio.h>
int main()
{
    int b=11;//same memory allocation even if variable name or value changes as memory location alloted remains same
    int a=9;
    printf("%p\n",&b);
    printf("%p",&a);
    return 0;
}