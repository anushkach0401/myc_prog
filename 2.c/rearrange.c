#include <stdio.h>
int main()
{
   int arr[5];
   for(int i=0;i<5;i++)
   {
    printf("Enter %d element\t",(i+1));
    scanf("%d",&arr[i]);
   }
   int rev[5];
   rev[4]=arr[0];
   for(int j=0;j<5-1;j++)
   {
    rev[j]=arr[j+1];
   }
   for(int k=0;k<5;k++)
   {
    printf("%d\t",rev[k]);
   }
   return 0;
}