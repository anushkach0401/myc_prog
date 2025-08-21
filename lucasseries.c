#include<stdio.h>
int findterms(int n)  /*LUCAZ SERIES STATES::   IF N=0,2
{                       IF N=1,1  ELSE:: N=x, (x-1)term+(x-2)term*/
    if(n==0)
    return 2;
    else if(n==1)
    return 1;
    return findterms(n-1)+findterms(n-2);
}
int main()
{
    int num;
    printf("Enter num of terms\n");
    scanf("%d",&num);
    int t=0;
    t=findterms(num);
    printf("%d\n",t);
    return 0;
}