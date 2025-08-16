#include <stdio.h>
int givenum(int num)
{ 
   int n;
   printf("Enter numbers,to stop,enter -1\t");
   scanf("%d",&n);
   if(n!=-1)
   {
    if(n<num)
    return (1+givenum(num));
    givenum(num);
   }

}
int main()
{
    int x;
    printf("Give the testing number\n");
    scanf("%d",&x);
    int cnt=0;
    cnt=givenum(x);
    if(cnt==0)
    printf("No valid num");
    else
    printf("%d",cnt);
    return 0;
}