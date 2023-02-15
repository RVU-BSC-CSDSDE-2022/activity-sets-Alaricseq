#include <stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
  int n,r,result;
  input_n_and_r(n,r);
  result=nCr(n,r);
  output(n,r,result);
}

void input_n_and_r(int *n, int *r)
{
  printf("Enter n and r");
  if(scanf("%d%d",n,r));
}

int nCr(int n, int r)
{
  int result;
  int n_fact = 1;
  int n_r =1;
  int r_fact = 1;
  for(int i=1 ; i<=n && n>=r; i++)
    {
      if(i <= r)
      {
        n_fact = n_fact * i;
        r_fact = n_fact * i;
        n_r = n_r *i;
      }
      else
      {
        n_fact = n_fact * i;
      }
    }
  result= n_fact/ (r_fact *i);
  return result;
}

void output(int n, int r, int result)
{
  printf("The ncr is %d",result);
}