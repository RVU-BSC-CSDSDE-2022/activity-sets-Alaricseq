#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
  int n, result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}

int input_number()
{
  int n;
  printf("Enter the number:");
  if(scanf("%d",&n));
  return n;
}
int is_prime(int n)
{
  int count=0;
  for(int i=1; i<n ;i++)
    if(n%i == 0)
    {
       count++;
    }
  if(count==2)
    return 1;
  else
    return 0;
}    

void output(int n, int result)
{
  if(result==1)
    printf("%d is not Prime number\n",n);
  else
    printf("%d is a Prime number\n",n);
}