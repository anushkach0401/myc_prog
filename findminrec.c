#include <stdio.h>
int findmin(int num)
{
    int min;
    int n;
    printf("Enter input");
    scanf("%d",&n);
   if(n>num)//otherwise infinite loop
   return 0;
    else
    {
        if(n>1)
        {   
            min=findmin(num--);//one to that num,chk one b4
            if(n<min)
            return n;
            else
            return min;
        }
    }
    
}
    int main()
    {
        int res;
        int x;
        printf("Enter the digit");
        scanf("%d",&x);
        res=findmin(x);
        printf("lowest is %d\t",res);
        return 0;
    }
    
