#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
	char string1[20] ,string2[20];
	input_two_strings(string1,string2);
	int result;
	result = stringcompare(string1,string2);
	output(string1,string2,result);
}

void input_two_strings(char *string1, char *string2)
{
	printf("Enter the First string\n");
	scanf("%s",string1);
	printf("Enter the Second string\n");
	scanf("%s",string2);
}


int stringcompare(char *string1, char *string2)
{
	int i=0;
	while(string1[i]==string2[i] && string1[i] != '\0' && string2[i] != '\0')
	{
		i++;
	}
	if(string1[i]==string2[i])
		return 0;
	if(string1[i]>string2[i])
		return 1;
	if(string2[i]>string1[i])
		return -1;
}

void output(char *string1, char *string2, int result)
{
	if(result==0)
		printf("The strings are equal \n");
	if(result==1)
		printf("%s is greater than %s",string1,string2);
	if(result==-1)
		printf("%s is greater than %s",string2,string1);
}	