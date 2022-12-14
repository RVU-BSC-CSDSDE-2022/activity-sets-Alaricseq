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
  n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  Complex result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
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
  Complex c;
  printf("Enter the real and imaginary number.\n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
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
  Complex result={0,0};
  for (int i=0 ; i<n ; i++)
    {
      result=add(result,c[i]);
    }
  return result;
}
void output(int n, Complex c[n], Complex result)
{
  for (int i=0 ; i<n ;i++)
    {
      printf("%.f+%.fi ",c[i].real,c[i].imaginary);
    }
  printf(" is %.f+%.fi \n", result.real,result.imaginary);
}