#include <stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
	int n;
	n=input_size();
	int a[n];
	input_array(n,a);
	int index;
	index=find_largest_index(n,a);
	output(index);
	return 0;
}	

int input_size()
{
	int n;
	printf("Enter the size of an array: ");
	if(scanf("%d",&n));
	return n;
}

void input_array(int n, int a[n])
{
  printf("Enter the numbers: ");
	for(int i=0; i<n; i++)
	{
		if(scanf("%d",&a[i]));
	}
}

int find_largest_index(int n, int a[n])
{
	int index=1;
	int max=a[0];
	for(int i=0 ; i<n ;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			index=i;
		}
	}
	return index;
}
void output(int index)
{
	printf("The index of the largest number in the array is %d",index);
}
