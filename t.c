#include <stdio.h>
void minmax(int a,int b)
{
	int min,max;
	
	if(a>b)
	{ 
		max=a;
		min=b;
	}
	else
	{ 
		max=b;
		min=a;
	}
	
	printf("max is=%d",max);
	printf("min is=%d",min);
}

void main (int n1,int n2)
{  
	printf("enter\n");
	scanf("%d%d",&n1,&n2);
	minmax(n1,n2);
}
