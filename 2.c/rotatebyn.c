#include <stdio.h>
int main()
{
   int arr[5];
   int n;
   printf("Enter");
   scanf("%d",&n);
   for(int i=0;i<5;i++)
   {
    printf("Enter %d element\t",(i+1));
    scanf("%d",&arr[i]);
   }
   int rev[5];
   for(int a=1;a<=n;a++) //to rotate by one n times
   {
    rev[4]=arr[0];//each time change and save last element
   for(int j=0;j<5-1;j++)
   {
    rev[j]=arr[j+1];//operation to rotate
   }
   } 
   for(int k=0;k<5;k++)
   {
    printf("%d\t",rev[k]);
   }
   return 0;
}