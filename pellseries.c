#include<stdio.h>
#include <stdio.h>

// Pell series: P(0)=0, P(1)=1, P(n)=2*P(n-1)+P(n-2)
int findterms(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return (2 * findterms(n - 1)) + findterms(n - 2);
}

int main()
{
    int num;
    printf("Enter n (to get nth Pell number): ");
    scanf("%d", &num);

    int t = findterms(num);
    printf("Pell(%d) = %d\n", num, t);

    return 0;
}