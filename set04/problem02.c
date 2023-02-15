#include <stdio.h>
typedef struct {
    float num, den;
} Fraction;
Fraction input();
float smallest(Fraction a, Fraction b, Fraction c);
void output(Fraction a, Fraction b, Fraction c, float x);

int main()
{
	Fraction a,b,c;
	a=input();
	b=input();
	c=input();
	float x;
	x=smallest(a,b,c);
	output(a,b,c,x);
}

Fraction input()
{
  Fraction n;
	printf("Enter numerator and denominator: ");
	if(scanf("%f %f",&n.num,&n.den));
	return n;
}

float smallest(Fraction a,Fraction b,Fraction c)
{
	float resa=a.num/a.den;
	float resb=b.num/b.den;
	float resc=c.num/c.den;
	float result;
	if(resa<resb && resa<resc)
	{
		result=1;
	}
	else if(resb<resa && resb<resc)
	{
		result=2;
	}
	else if(resc<resa && resc<resb)
	{
		result=3;
	}
	return result;
}

void output(Fraction a, Fraction b, Fraction c, float x)
{
	if(x==1)
	{
		printf("The smallest is %f/%f",a.num,a.den);
	}
	else if(x==2)
	{
		printf("The smallest is %f/%f",b.num,b.den);
	}
	else if(x==3)
	{
		printf("The smallest is %f/%f",c.num,c.den);
	}
}
