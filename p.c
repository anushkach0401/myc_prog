#include <stdio.h>
int main()
{ 
   char ch;
   printf("enter a character\n");
   scanf("%c",&ch);
   if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
   printf("vowel");
   else
   printf("consonant");
   return 0;

}
	
