#include <stdio.h>
int factfind(int n)
{
    if (n==1)
    return 1;
    else
    return n*factfind(n-1);
}
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("Factorial is:%d",factfind(num));
    return 0;
}