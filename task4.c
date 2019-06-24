#include<stdio.h>
#include<string.h>
void main()
{
    char first[20],last[20];
    printf("Enter first and last names\n");
    scanf("%s %s",first,last);
    strcat(first," ");
    strcat(first,last);
    printf("Full name is %s\n",first);
}
