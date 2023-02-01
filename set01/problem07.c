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
	int n,sum;
	n=input_n();
	sum=sum_n_nos(n);
	output(n,sum);
	return n;
}

int input_n()
{
	int n;
	printf("Enter the number: ");
	if(scanf("%d",&n));
	return n;
}

int sum_n_nos(int n)
{
	int sum;
  for(int i=0 ; i<=n ; i++)
	{
		sum+=i;
	}
	return sum;
}

void output(int n, int sum)
{
	printf("Sum of all natural numbers until %d is %d\n",n,sum);
}
