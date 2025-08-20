#include <stdio.h>
void printing(int n)
{   
    if(n>0)
    printf("%d",n);  
    printing(--n);
}

int main()
{
    int a;
    printf("number of terms are\n");
    scanf("%d",&a);
    printing(a);
    return 0;
}