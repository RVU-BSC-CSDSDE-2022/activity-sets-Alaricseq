#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
  int n ,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
}

int input_array_size()
{
  int n;
  printf("Enter the array size:");
  if(scanf("%d",&n));
  return n;
}

void input_array(int n, int a[n])
{
  printf("Enter the number:\n");
  for(int i=0 ; i<n ; i++)
    {
      scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for(int i=0 ; i<n ; i++)
    {
      int count=0;
      for(int j=1 ; j<a[i] ; j++)
        {
          if(a[i]%j==0)
          {
            count = count +1;
          }
        }
      if(count >=2)
      {
        sum = sum + a[i];
      }     
    }
  return sum;
}

void output(int sum)
{
  printf("The sum of composite number is %d\n",sum);
}
