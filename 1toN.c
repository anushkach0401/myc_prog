#include <stdio.h>//very imp programme
void printnto1(int n)
{   
    if(n>0)
   {
     printf("%d",n);  //print a num
    printnto1(--n);  //call with next lower num
   }
}
void print1ton(int x)
{   
    if(x>1)//prevent printing 0
   {
     print1ton(--x);//call with lower fn
    printf("%d",x);// print 1 first and then keep progressing
   }

}

int main()
{
    int a;
    printf("number of terms are\n");
    scanf("%d",&a);
    printnto1(a);
    printf("\n");
    print1ton(a);
    return 0;
}