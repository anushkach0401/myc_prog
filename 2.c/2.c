#include <stdio.h>
int main()
{ int n;
    int a=0;
    int arr[n];
    printf("enter length of array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {  printf("enter %d element",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n/2;j++)
    {
        if(arr[j]!=arr[j-j-1])
        
            a++;
            
    }
    if (a==0)
    printf(" Palindromme");
    else
    printf("Not Palindromme");
    return 0;
}
