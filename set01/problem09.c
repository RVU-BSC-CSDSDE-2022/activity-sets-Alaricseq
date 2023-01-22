// #include <math.h>
// #include <stdio.h>
// float input();
// float square_root(float n);
// void output(float n, float sqrroot);
// int main()
// {
//   double n,sqrroot;
//   n=input();
//   sqrroot=square_root(n);
//   output(n,sqrroot);
// }

// float input()
// {
//   double n;
//   printf("Enter the number: ");
//   if(scanf("%lf",&lf));
//   return n;
// }

// float square_root(float n)
// {
//   double sqrroot;
//   sqrroot = sqrt(n);
//   return sqrroot;
// }

// void output(float n, float sqrroot)
// {
//   printf("The square root of %.2lf = %.2lf\n",n,sqrroot);
// }
#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  
}

float intput()
{
  float n;
  printf("Enter the number: ");
  if(scanf("%f",&n));
  return n ;
}

float square_root(float n)
{
  float guess,next;
  guess=n/2;
  next=0.5*(guess+n/guess);
  while(fabs(next-guess)>0.001)
    {
      guess=next;
      next=0.5*(guess+n/guess);
    }
  return next;
}

void outpu(float n, float sqrroot)
{
  printf("Square root of %.2f is %.2f\n",n,sqrroot);
}
