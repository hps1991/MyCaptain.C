#include<stdio.h>
void main()
{
	int num,fac=1;
	printf("Enter Number\n");
	scanf("%d",&num);
	while(num>0)
	{
		fac=fac*num;
		num--;
	}
	printf("The factorial is %d",fac);
}
