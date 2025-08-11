#include <stdio.h>
#include <string.h>

int main()
{
    int c=0;//count words
    char sent[50];
    printf("Enter a sentence:\n ");
    gets(sent);
    for(int i=0; i < (int)strlen(sent); i++)
    {
        if(sent[i]==' ')//blank after each word is there
        c++;
    }
    printf("Num of words are:%d",(c));//last there is no blank,so adding 1.Else u hv to give blank after last word also.
    return 0;
}