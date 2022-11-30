// #include <stdio.h>
// int main()
// {
//   int a ,b, c;
//   printf("Enter 3 numbers:");
//   scanf("%d%d%d", &a,&b,&c);

//   int res = largest(a,b,c);
//   printf("Largest number %d",res);
// }
// int largest(int x , int y, int z)
// {
//   if (x >=y && x >= z)
//     return x;
//   else if (y >=z && y >= z)
//     return y;
//   else 
//     return z;
  
// }
#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
  input();
}
int input()
{
  int a ,b, c;
  printf("Enter 3 numbers:");
  scanf("%d%d%d", &a,&b,&c);
  compare(a,b,c);
}
int compare(int a , int b, int c)
{
  int largest; 
  if (a >=b && a >= c)
    largest=a;
  else if (b >=a && b >= c)
    largest=b;
  else 
    largest=c;
  output(a,b,c,largest);
}
void output(int a, int b, int c, int largest)
{
  printf("The Largest %d , %d and %d  is %d ",a,b,c,largest);
}