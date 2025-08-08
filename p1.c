#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int p=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>0)
    {
      p*=n;
      n--;  
    }
    printf("Factorial is %d\n", p);
    return 0;
}