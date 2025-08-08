#include <stdio.h>
int main()
 {
   int date[3];
   for(int i = 0; i < 3; i++)
    {
        printf("Enter date component %d: ", i + 1);
      scanf("%d", &date[i]);
   }
   int copy[3];
   for(int i = 0; i < 3; i++)
    {
        copy[i] = date[i];
    }
    printf("Copied date %d/%d/%d: ", copy[0], copy[1], copy[2]);
    return 0;
}