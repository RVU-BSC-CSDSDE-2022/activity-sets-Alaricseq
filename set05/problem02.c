#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
	float radius,height, length;
	input_camel_details(&radius,&height,&length);
	float weight;
	weight=find_weight(radius,height,length);
	output(radius,height,length,weight);
	return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
printf("Enter radius ,height and length: ");
if(scanf("%f%f%f",radius,height,length));	
}	

float find_weight(float radius, float height, float length)
{
	float weight;
	weight = 3.14 * pow(radius,3) * sqrt(height * length);
	return weight;
}

void output(float radius, float height, float length, float weight)
{
	printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %f",radius,height,length,weight);
}
