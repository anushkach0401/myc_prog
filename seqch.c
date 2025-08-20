#include <stdio.h>
int countchar(char ch)
{
   char c;
   printf("Enter char,to stop enter $\n");
   scanf("%c",&c);
   if(c=='$')
   return 0;
   if((c!='$')&&(c==ch))
   return 1+countchar(ch);
   return countchar(ch);
}

int main()
{
    char a;
    printf("Enter char to be checked\n");
    scanf("%c",&a);
    int cnt=0;
    cnt=countchar(a);
    printf("%d",cnt);
    return 0;
}
