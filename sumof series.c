#include <stdio.h>//very imp qs
int sumofarth(int n)
{   
    if(n==1)
    return 1;
    else
    return n + sumofarth(n - 1);//calls the fn with 1 less value each time
}

int main()
{
    int a;
    printf("enter num of terms:\n");
    scanf("%d",&a);
    printf("%d\n", sumofarth(a));
    return 0;
}

   