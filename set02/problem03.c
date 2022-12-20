#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
  int n ,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  
}
int input_number()
{
  int n;
  printf("Enter the number:\n");
  if(scanf("%d",&n));
  return n;
}

int is_composite(int n)
{
  int count=0;
  for (int i=0 ; i<n ; i++)
    {
      if (n%i == 0)
      {count++;}
    }
  if (count>2)
    return 1;
  else
    return 0;
}
void output(int n, int result)
{
  if (result==1)
    printf("%d is a composite number.\n",n);
  else
    printf("%d is not a composite number.\n",n);
}