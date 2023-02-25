#include <stdio.h>
int input(int x);
float borga_X(int x);
void output(int x, float result);

int main()
{
	int x;
	x=input(x);
	float result;
	result=borga_X(x);
	result=result+1;
	output(x,result);
	return 0;
}

int input(int x)
{
	printf("Enter the number: ");
	if(scanf("%d",&x));
	return x;
}

float borga_X(int x)
{
	float i=1,j=1,num=1,den,sum=0;
	while(i>0)
	{
		den=1;
		for(j=1;j<((2*i)+2);j++)
		{
			den=den * j;
		}
		num=num*x;
		if((num/den)>0.000001)
		{
			sum=sum+(num/den);
			i=i+1;
		}
		else
		{
			break;
		}
	}
	return sum;
}

void output(int x, float result)
{
	printf("borga(%d) = %f\n",x,result);
}
