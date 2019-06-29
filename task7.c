#include<stdio.h>
#include<string.h>
void main()
{
	int i,flg=1,len;
	char word[20];
	printf("Enter word\n");
	scanf("%s",word);
	len=strlen(word);
	for(i=0;i<(len/2)+1;i++)
	{
		if(word[i]!=word[len-i-1])
		{
			flg=0;
			break;
		}
			
	}
	if(flg==1)
		printf("A Palindrome\n");
	else
		printf("Not a palindrome ");
	
}
