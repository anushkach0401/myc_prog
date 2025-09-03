#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date birthday;
    printf("Enter day\n");
    scanf("%d",&birthday.day);
    printf("Enter month\n");
    scanf("%d",&birthday.month);
    printf("Enter year");
    scanf("%d",&birthday.year);
    printf("Birthday is %d/%d/%d",birthday.day,birthday.month,birthday.year);
    return 0;
}
