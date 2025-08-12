#include <stdio.h>
int findsum(int n)
{
   if(n%10==0)
   return n;
   else
   return (n%10)+findsum(n/10);//always in this line..give first and second expected num only.
}
int main()
{
    int a;
    printf("Enter value");
    scanf("%d",&a);
    printf("Sum of digits is: %d",findsum(a));
    return 0;

}