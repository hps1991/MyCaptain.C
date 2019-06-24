#include<stdio.h>
int power(int num,int n)
{
	int pow=1,i;
	for(i=0;i<n;i++)
		pow=pow*num;
	return pow;
}
void main()
{
	int num,x,n=0,sum=0,rem;
	printf("Enter the number\n");
	scanf("%d",&num);
	x=num;
	while(x!=0)
	{
		n++;
		x=x/10;
	}
	printf("n= %d\n",n);
	x=num;
	while(x!=0)
	{
		rem=x%10;
		sum=sum+power(rem,n);
		x=x/10;
	}
	if(sum==num)
	printf("An armstrong number\n");
	else
	printf("Not an armstrong number\n");
}
