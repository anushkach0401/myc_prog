#include <stdio.h>
int main()
{
   int arr[5];
   for(int i=0;i<5;i++)
   {
    printf("Enter %d element\t",(i+1));
    scanf("%d",&arr[i]);
   }
   int s=0;
   for(int j=0;j<5;j++)
   {
    s+=arr[j];
   }
   printf("Sum is\t%d",s);
   return 0;
}