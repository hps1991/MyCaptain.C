#include<stdio.h>
void main()
{
	int num,rev=0,rem;
	printf("Enter a number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rev=rev*10;
		rem=num%10;
		num=num/10;
		rev=rev+rem;
	}
	printf("The reverse is %d",rev);
}
