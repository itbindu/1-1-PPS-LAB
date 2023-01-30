#include<stdio.h>
void main()
{
	int sum=0,rev=0,n,r;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	sum=sum+r;
	rev=(rev*10)+r;
	n=n/10;
	}
	printf("%d",rev);
	if(n==rev)
	printf("palindrome");
	else
	printf("not palindrome");
	return;
	}
