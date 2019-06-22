//Celsius to Fahrenheit
#include<stdio.h>
void main()
{
    float cel;
    printf("Enter temperature in Celsius\n");
    scanf("%f",&cel);
    printf("In Fahrenheit: %f\n",((9*cel)/5)+32);
}
