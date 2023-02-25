#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
	float radius,height,length;
	input_camel_details(&radius,&height,&length);
	int mood;
	mood=find_mood(radius,height,length);
	output(radius,height,length,mood);
	return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
	printf("Enter the radius, height and length: ");
	if(scanf("%f%f%f",radius,height,length));
}

int find_mood(float radius, float height, float length)
{
	int mood;
	if(radius<height && radius<length)
	{
		mood=1;
	}
	else if(height<radius && height<length)
	{
		mood=2;
	}
	else if(length<radius && length<height)
	{
		mood=3;
	}
	return mood;
}

void output(float radius, float height, float length, int mood)
{
	if(mood==1)
	{
		printf("The Camel is sick");
	}
	else if(mood==2)
	{
		printf("The Camel is happy");
	}\

	else if(mood==3)
	{
		printf("The Camel is tense");
	}
}
