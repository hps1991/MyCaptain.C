#include<stdio.h>

void display(char title[],char author[],char genre[])
{
	printf("Title: %s\nAuthor: %s\nGenre: %s\n",title,author,genre);
}

struct book
{
	char title[20],author[20],genre[20];
};

void main()
{
	struct book buk;
	printf("Enter title,author and genre\n");
	scanf("%s %s %s",buk.author,buk.genre,buk.title);
	display(buk.author,buk.genre,buk.title);
}
