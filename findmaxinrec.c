#include <stdio.h>
int findmax(int num)
{
    int max;
    int n;
    printf("Enter input");
    scanf("%d",&n);
   if(n>num)//otherwise infinite loop
   return 0;
    else
    {
        if(n>1)
        {   
            max=findmax(num--);//one to that num
            if(n>max)
            return n;
            else
            return max;
        }
    }
    
}
    int main()
    {
        int res;
        int x;
        printf("Enter the digit");
        scanf("%d",&x);
        res=findmax(x);
        printf("Greatest is %d\t",res);
        return 0;
    }
    
