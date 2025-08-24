#include <stdio.h>
int main()
{
    const n;//by default considered int
    printf("Enter");
    scanf("%d",&n);
    printf("Value is %d",n);
    return 0;
}
//const int *ptr---value we are pointing cannot be changed butpointer can be changed
//int const *ptr--vice versa 
// const int const *ptr--all constant,none can be changed
