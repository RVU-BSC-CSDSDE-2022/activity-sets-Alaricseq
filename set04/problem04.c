#include <stdio.h>
#include <math.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
	int n;
	n=input_degree();
	float a[n];
	input_coefficients(n,a);
	float x;
	x=input_x();
	float result;
	result=evaluate_polynomial(n,a,x);
	output(n,a,x,result);
	return 0;
}

int input_degree()
{
	int n;
	printf("Enter degree: ");
	if(scanf("%d",&n));
	return n;
}

void input_coefficients(int n, float a[n])
{
	for(int i=0; i<=n ;i++)
	{
		printf("Enter the coefficients: ");
		if(scanf("%f",&a[i]));
	}
}

float input_x()
{
	float x;
	printf("Enter x");
	if(scanf("%f",&x));
	return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
	float result=0;
	for(int i=0; i<=n ; i++)
	{
		result=result+(a[i] * pow(x,i));
	}
	return result;
}

void output(int n, float a[n], float x, float result)
{
	printf("The polynomial at a given point is %f",result);
}
