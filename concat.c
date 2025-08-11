#include <stdio.h>
#include <string.h>
int main()
{
    char w1[50] = "Anushka ";//w1 increased size to have capacity to hold everything after cat. ' ' given to create space btwn 2 words.
    char w2[] = "Chakraborty";
    strcat(w1, w2);
    puts(w1);
    return 0;
}