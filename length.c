#include <stdio.h>
#include <string.h>
void findlength(char str[])
{
    printf("enter string\n");
    gets(str);
    int l;
    l=strlen(str);
    printf("length is %d",l);
}
int main()
{
    char word[30];
    findlength(word);
    return 0;
}