#include <stdio.h>
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
  Complex a,b,sum;
  input_complex();
  sum=add_complex(a,b);
  output();
  
}

Complex input_complex()
{
  Complex a,b;
  printf("Enter a and b where a + ib is the First complex number.\n");
  scanf("%d%d",&a.real,&a.img);
  printf("Enter c and d where c + id is the Second complex number.\n");
  scanf("%d%d",&b.real,&b.img);
}
Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real + b.real;
  sum.img=a.img + b.img;
  return sum;
}
void output(Complex a, Complex b, Complex sum);
{
  printf("The sum of 2 complex numbers are %d + %di\n",sum.real,sum.img);
  return 0;
}