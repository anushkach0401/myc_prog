#include <stdio.h>
#include <string.h>
int main()
{
    int a=0;
    char str[30];
    printf("Enter a string\n");
    gets(str);
    int l=strlen(str);//to know actual length
    for(int i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
        a++;
    }
    if(a==0)
    printf("Pallindromme");
    else
    printf("Not pallindromme");
    return 0;
}