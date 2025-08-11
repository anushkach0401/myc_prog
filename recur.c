#include <stdio.h>
#include <string.h>

void printMe(int cnt); // prototype

int main()
{
    int a = 10;
    printMe(a);
    return 0;
}

void printMe(int cnt)
{
    if(--cnt > 1)
    {
        printf("I am Anushka %d\n", cnt);
        printMe(cnt);
    }
}