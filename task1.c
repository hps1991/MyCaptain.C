#include<stdio.h>
void main()
{
    char name[20],no[15];
    int age;
    printf("Enter your Name, age and phone number\n");
    scanf("%s %d %s",name,&age,no);
    printf("Name: %s \nAge: %d \nPhone Number: %s\n",name,age,no);
}
