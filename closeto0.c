#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    int x;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element",(i+1));
        scanf("%d",&arr[i]);
    }
    int minsum=abs((arr[0]+arr[1])-0);
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(k!=j)
            {
                x=abs((arr[j]-arr[k])-0);
                if (x<minsum)
                minsum=x;
            }
        }
    }
    printf("sum closest to 0 is:\t%d",minsum);
    return 0;
}