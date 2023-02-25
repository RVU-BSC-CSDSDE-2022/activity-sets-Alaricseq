#include <stdio.h>
#include <ctype.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
	char name[100];
	int res;
	input(name);
	res = has_nice_name(name);
	output(res);
}

void input(char *name)
{
	printf("Enter the camel name: ");
	if(scanf("%s",name));
}

int has_nice_name(char *c)
{
	int vowel=0, i, consonant=0,res;
	char C;
	for(i=0 ; c[i] != '\0' ;i++)
	{
		C= tolower(c[i]);
		if(C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u')
		{
			vowel++;
		}
		else if (C != 'a' || C != 'e' || C != 'i' || C != 'o' || C != 'u')
		{
			consonant++;
		}
	}
	if(vowel >= 2 && consonant >= 2)
	{
		res = 1;
	}
	return res;
}

void output(int res)
{
	if(res == 1)
	{
		printf("The camel does have a nice name");
	}
	else
	{
		printf("The came does not have a nice name");
	}
}	