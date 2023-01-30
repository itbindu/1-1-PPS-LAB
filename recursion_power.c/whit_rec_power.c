#include<stdio.h>
int power(int,int);
int main()
{
	int x,n;
	printf("enter the values");
	scanf("%d %d",&x,&n);
	int res=power(x,n);
	printf("%d*%d is %d",x,n,res);
	return 0;
	}
	int power(int x,int n)
	{
	if(n==0)
	return  0;
	else if (n==1)
	return x;
	else if (n%2==0)
	return power(x*x,n/2);
	else
	return x*power(x*x,(n-1)/2);
	}
