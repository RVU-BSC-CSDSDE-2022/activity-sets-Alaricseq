#include <stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
  int a,b,sum;
  printf("Enter 2 numbers: ");
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;	
}

int input()
{
	int n;
	if(scanf("%d",&n));
	return n;
}

void add(int a, int b, int *sum)
{
	*sum = a + b;
}

void output(int a, int b, int sum)
{
	printf("The sum of the %d and %d is %d\n",a,b,sum);
}
