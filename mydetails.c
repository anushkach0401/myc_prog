#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your name\n");
    gets(name);//gets reads text whereas scanf reads one word w/o space.
    int age;
    printf("Enter age\n");
    scanf("%d",&age);
    char college[6];
    printf("Enter your college\n");
    scanf("%s",&college);//%9s means irrespective of length of input s/s will read only first 9 letters.
    puts(name);//puts automatically takes to new line whereas printf we have to add\n.puts does not allow customisation tho.used only in str.
    printf("Age is\t%d\n",age);
    puts(college);
    return 0;
    
}