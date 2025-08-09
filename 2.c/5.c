#include <stdio.h>
#define SIZE 5
int main()
{ 
   int c=0;
   int arr[SIZE];
   for(int i=0;i<SIZE;i++)
   {
    printf("Enter %d element\n",(i+1));
    scanf("%d",&arr[i]);
   }

   for(int j=0;j<SIZE;j++)
   {  
        int a=0;

        for(int k=0;k<SIZE;k++)
        {
            if(k!=j) // so that the same element is not chkd.otherwise proper output will not come.
            {
                if(arr[j]==arr[k])
                    {
                        a++;
                    }
            }
        }
        
        if(a!=0)
        {
            c++;
        }
    }
    printf("\n Number of non unique elements is %d\n",c);
    return 0;
   }