#include <stdio.h>
int main()
{   int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a=0;
    int b=0;
    int arr[n];
     for(int i=0;i<5;i++)
    {
        printf("Enter %d element of array\n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<5;j++)
    {
        if(arr[j-1]==arr[j])
        a++;
        else if(arr[j-1]>arr[j])
        b++;
    }
    if(b>0)
    printf("Not sorted");
    else if(a>0)
    printf("Sorted");
    else
    printf("Really sorted");
    return 0;
}