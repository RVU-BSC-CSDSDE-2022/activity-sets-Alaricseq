#include <stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
	Fraction a,b;
	int gcd;
	a=input_fraction();
	b=input_fraction();
	Fraction sum;
	sum=add_fractions(a,b);	
	output(a,b,sum);
}

Fraction input_fraction()
{
	Fraction n;
	printf("Enter numerator and denominator: ");
	if(scanf("%d%d",&n.num,&n.den));
	return n;
}

int find_gcd(int a, int b)
{
	int gcd;
	for(int i=1; i<=a && i<=b; i++)
	{
		if(a%(i)==0 && b%(i)==0)
		{
			gcd=i;
		}
	}
	return gcd;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
	Fraction sum;
	int num=(f1.num*f2.den+f2.num*f1.den);
	int den=(f1.den*f2.den);
	int i=find_gcd(num,den);
	sum.num=num/i;
	sum.den=den/i;
	return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
	printf("The sum is %d/%d", sum.num,sum.den);
}
