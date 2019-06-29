#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter required number\n");
	scanf("%d",&num);
	printf("The multiplication table is:\n");
	for(i=1;i<=10;i++)
	printf("%d * %d = %d\n",num,i,num*i);
}
