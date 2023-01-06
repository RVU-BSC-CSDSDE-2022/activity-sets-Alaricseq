#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  ouput(n,fibo);
  return0;  
}
int input()
{
  int n;
  printf("Enter the number:\n");
  if(scanf("%d",&n));
  return n;
}
int find_fibo(int n)
{
  
}
void output(int n, int fibo)
{
  printf("fibo(%d) = %d",n,fibo);
}