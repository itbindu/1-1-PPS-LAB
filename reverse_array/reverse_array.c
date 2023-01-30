#include<stdio.h>
int main()
{
	int a[3]={10,20,30};
	int i;
	int *ptr;
	ptr=&a[2];
	for(i=2;i>=0;i--)
	{printf("element %d is %d\n",i,*ptr);
	ptr--;
	}
	return 0;
	}
