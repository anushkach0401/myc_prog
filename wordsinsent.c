#include <stdio.h>
#include <string.h>

int main()
{
    int c=0;
    char sent[50];
    printf("Enter a sentence:\n ");
    gets(sent);
    for(int i=0;i<strlen(sent);i++)
    {
        if(sent[i]==' ')
        c++;
    }
    printf("Num of words are:%d",(c+1));
    return 0;
}