#include<stdio.h>
void main()
{
	int a,b,c,choice;
	printf("enter a,b");
	scanf("%d %d",&a,&b);
	printf("enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	c=a+b;
	printf("%d",c);
	break;
	case 2:
	c=a-b;
	printf("%d",c);
	break;
	case 3:
	c=a*b;
	printf("%d",c); 
	break;
	case 4:
	c=a/b;
	printf("%d",c);
	break;
	case 5:
	c=a%b;
	printf("%d",c);
	break;
	default:(" enter between the 1 to 5");
	break;
	}
	return;
	}
