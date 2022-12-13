#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
  int n;
  Complex result={0,0};
  n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
}

int get_n()
{
  int n;
  printf("Enter the number of the array.\n");
  scanf("%d",&n);
  return n;
}

Complex input_complex()
{
  Complex c1;
  printf("Enter the real and imaginary number.\n");
  scanf("%f%f",&c1.real,&c1.imaginary);
}

void input_n_complex(int n, Complex c[n])
{
  for (int i=0 ; i<n ; i++)
    {
      c[i]=input_complex();
    }
}

Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex sum={0,0};
  for (int i=0 ; i<n ; i++)
    {
      c[i]=add(sum,c[i]);
    }
}
void output(int n, Complex c[n], Complex result)
{
  for (int i=0 ; i<n-1 ;i++)
    {
      printf("%d %d + ",(int)c[i].real,(int)c[i].imaginary);
    }
  printf("%d+%d ",(int)c[n-1].real,(int)c[n-1].imaginary);
  printf(" is %d+%di", (int)result.real,(int)result.imaginary);
}