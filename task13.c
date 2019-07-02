#include<stdio.h>
void main()
{
	int min,max,arr[10],n,i;
	printf("Enter number of  elements(less than 10 elements)\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	printf("Minimum:%d\nMaximum:%d\n",min,max);
}
