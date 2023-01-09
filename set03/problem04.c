#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;  
}
int input()
{
  int n;
  printf("Enter the number: ");
  if(scanf("%d",&n));
  return n;
}
int find_fibo(int n)
{
  int fibo;
  if (n==0)
  {
    fibo = 0;
  }
  else if (n==1)
  {
    fibo = 1;
  }
  else 
  {
    fibo =find_fibo(n-1) + find_fibo(n-2);
  }
}
void output(int n, int fibo)
{
  printf("fibo(%d) = %d\n",n,fibo);
}