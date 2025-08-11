#include <stdio.h>
#include <string.h>
int main()
{
    char w1[] = "Anushka ";
    char w2[50];//w2 increased size to have capacity to hold everything after cpy. ' ' given to create space btwn 2 words.
    strcpy(w2, w1);//always first dest then source.
    puts(w2);
    return 0;
}