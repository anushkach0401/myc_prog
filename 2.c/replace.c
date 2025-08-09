#include <stdio.h>
int main()
{
   int arr[5];
   for(int i=0;i<5;i++)
   {
    printf("Enter %d element\t",(i+1));
    scanf("%d",&arr[i]);
   }
   for(int j=0;j<5;j++)
   {
    arr[j]=0;
   }
   for(int k=0;k<5;k++)
   {
    printf("%d\t",arr[k]);
   }
   return 0;
}