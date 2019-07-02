#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;float temp;
	printf("Enter the choice: \n1.Celcius to Fahrenheit\n2.Fahrenheit to Celsius\n3.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("Enter temperature in Celsius\n");
				scanf("%f",&temp);
				printf("Temperature in Fahrenheit: %f\n",((temp*9)/5)+32);
				break;
			}
		case 2:
			{
				printf("Enter temperature in Fahrenheit\n");
				scanf("%f",&temp);
				printf("Temperature in Celsius: %f\n",((temp-32)*5)/9);
				break;
			}
		case 3:exit(0);
		default: printf("Invalid Choice");
	}
}
