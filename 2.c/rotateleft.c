#include <stdio.h>
#define SIZE 5
int main()
{
  int arr[SIZE];
  for(int i=0;i<SIZE;i++)
  {
    printf("enter %d element",(i+1));
    scanf("%d",&arr[i]);
  }
  for(int j=0;j<SIZE;j++)
  {
    printf("%d\t",(arr[j]-1));
  }
  return 0;
}