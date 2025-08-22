#include <stdio.h>//very imp program of reccurssion
int findposn(int num)
{
   if(num<10)//single digit--0 is even posn
   {
      if(num%2==0)
      return 1;
      else
      return 0;
   }
     else if(num<100)
     {
        if((num%2==0)&&((num/10)%2==1))
        return 1;
        else 
        return 0;
     }
     else
     {
        if(((num%10)%2==0) && (((num/10)%10)%2==1))
        return findposn(num/100);//repeat for each hundred from back
        else 
        return 0;
     }
} 
int main()
{
    int n;
    printf("Enter num ");
    scanf("%d",&n);
    int res=findposn(n);
    printf("%d",res);
    return 0;
}
