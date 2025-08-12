#include <stdio.h>//we cant use counter in reccurssions
int count(int n)
{
    if(n!=0)
    return 1+count(n/10);//write first step...rest recurssion will handle
}
int main()
{
    int a;
    printf("Enter num\n");
    scanf("%d",&a);
    printf("Num of digits is: %d",count(a));
    return 0;
}
