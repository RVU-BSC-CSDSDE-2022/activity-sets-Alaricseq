#include <stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  input();
}

int input() 
{
  int a, b, sum;
  printf("Enter two numbers");
  scanf("%d%d", &a, &b);
  add(a, b, &sum);
}

void add(int a, int b, int *sum) 
{
  *sum = a + b;
  output(a, b, *sum);
}

void output(int a, int b, int sum) 
{
  printf("The sum of out %d and %d  is %d ", a, b, sum);
}  