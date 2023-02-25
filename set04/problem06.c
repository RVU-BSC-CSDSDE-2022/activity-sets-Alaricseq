#include <stdio.h>
#include <string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
	char string[100];
	int no_words;
	input_string(string);
	no_words=count_words(string);
	output(string,no_words);
}

void input_string(char *a)
{
	printf("Enter the string: ");
	if(scanf("%[^\n]s",a));
	
}
int count_words(char *string)
{
	int count=0;
	char *token;
	token=strtok(string," ");
	while(token!=NULL)
	{
		count++;
		token=strtok(NULL,"  ");
	}
	return count;
}

void output(char *string, int no_words)
{
	printf("The number of words in '%s' is %d\n",string,no_words);
}

