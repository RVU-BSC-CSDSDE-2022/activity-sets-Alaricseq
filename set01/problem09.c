#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  double n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
}

float input()
{
  double n;
  printf("Enter the number: ");
  if(scanf("%lf",&lf));
  return n;
}

float square_root(float n)
{
  double sqrroot;
  sqrroot = sqrt(n);
  return sqrroot;
}

void output(float n, float sqrroot)
{
  printf("The square root of %.2lf = %.2lf\n",n,sqrroot);
}