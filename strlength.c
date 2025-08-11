#include <stdio.h>
#define SIZE 21
int findlength(char str[])//to find and return length of array and use that in main fn.
{ 
  int c=0;//counting length
  int i=0;//each element in array of char
  while(str[i]!='\0')//till it reaches last element
  {  
    /*to remove gaps from counting u can use 
    if(str[i-1]==' ') continue;
    use this statement after i++ statement so that it proceeds but gap isn't counted*/
     i++;//proceeeds with elements
    c++;//counts length
  }
  return c;
}
int main()
{
    char word[SIZE];
    printf("Enter a word whose length u want\t");//ask input from user
    gets(word);//accept word
    int length;
    length = findlength(word);
    printf("length of word is %d", length);
    return 0;
}