#include <stdio.h>
void printseries(int n)
{
    if(n==1)
    printf("%d",n);
    else if(n>1)//prevent repeating of 1
    {
        printf("%d",n);//n to 1
        printseries(--n);
        printf("%d",n);// 1 to n
    }
}
int main()
{
    int a;
    printf("Enter num of terms\n");
    scanf("%d",&a);
    printseries(a);
    return 0;
}