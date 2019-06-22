//Sum and Average
#include<stdio.h>
void main()
{
    float num,sum=0;
    printf("Enter Marks\n");
    for(int i=0;i<3;i++)
    {
      scanf("%f",&num);
      sum=sum+num;
    }
    printf("Sum is %f\nAverage is %f",sum,sum/3);

}
