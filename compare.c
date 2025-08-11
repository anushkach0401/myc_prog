#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30]="anushka";
    char str2[30]="anamika";
    int x;
    x=strcmp(str2,str1);
    printf("%d",x);
    return 0;
}