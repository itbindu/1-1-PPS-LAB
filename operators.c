#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the a,b");
	scanf("%d %d,",&a,&b);
	c=a+b;
	printf("a+b %d\n",c);
	c=a-b;
	printf("a-b %d\n",c);
	c=a/b;
	printf("a/b %d\n",c);
	c=a*b;
	printf("a*b %d\n",c);
	c=a%b;
	printf("a reminder of b %d\n",c);
	printf("++a %d=b\n",++a);
	printf("--a %d=b\n",--a);
	printf("a<b %d\n",a<b);
	printf("a==b%d\n",a=b);
	printf("a>b %d\n",a>b);
	return;
	}
