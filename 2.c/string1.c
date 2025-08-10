#include <stdio.h>
int main()
{
    char arr[7] = {'A','N','U','S','H','K','A'};// char str[]="ANUSHKA" || char str[]={'A','N','U','S','H','K','A','\0'}---FOR STRING
    for(int i=0;i<7;i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}