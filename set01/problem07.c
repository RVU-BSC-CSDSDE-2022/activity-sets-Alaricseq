// #include <stdio.h>
// int main() 
// {
//   int n, i, sum = 0;

//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   for (i=0 ; i <= n; ++i)
//     {
//       sum += i;
//     }

//   printf("Sum = %d", sum);
//   return 0;
// }
#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
  int n, sum;
  n = input_n();
  sum_n_nos(n);
  return 0;
}

int input_n()
{
  int num;
  printf("Enter the number");
  scanf("%d",&num);
  return num;
}

int sum_n_nos(int n)
{ 
  int i ,sum=0;
  for (i=0 ; i <= n; ++i)
  {
    sum += i;
  }
  output(n,sum);
}

void output(int n, int sum)
{
  printf("Sum of all natural numbers untill n=%d is %d", n, sum);
}
