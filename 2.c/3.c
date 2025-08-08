#include <stdio.h>
int main()
{  
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("enter %d element",(i+1));
        scanf("%d",&arr[i]);
    }
    int maxsum=arr[0]+arr[1];
    for(int j=1;j<5;j++)
    {
        if((arr[j-1]+arr[j])>maxsum)
        maxsum=arr[j-1]+arr[j];
    }
    printf("max sum is %d",maxsum);
    return 0;


}