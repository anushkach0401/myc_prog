#include <stdio.h>
int countnum()
{
   int n;
   printf("Enter num,to stop enter -1\n");
   scanf("%d",&n);
   if(n==-1)
   return 0;
   if((n!=-1)&&(n%2==0))
   return n+countnum();
   return countnum();
}

int main()
{
   
    int cnt=0;
    cnt=countnum();
    printf("%d",cnt);
    return 0;
}