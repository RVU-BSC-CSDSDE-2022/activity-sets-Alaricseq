#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
  
}

int input_n()
{
  int n;
  printf("Enter number of triangle\n");
  scanf("%f",&n);
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and altitude:\n");
  scanf ("%f%f",&t.base,&t.altitude);
  return t;
}

void input_n_triangles(int n, Triangle t[n])
{
  for (int i=0 ; i<n ; i++)
    {
      t[i]=input_triangle();
    }
}

void find_area(Triangle *t)
{
  t->area=((t->base)*(t->altitude))/2;
}

void find_n_areas(int n, Triangle t[n])
{
  Triangle count={0,0};
  for (int i=0 ; i<n ;i++)
    {
      count=find_area(count,c[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Trianlge smallest;
  smallest.area=0;
  for (int i=0 ;i<n ;i++)
    {
        
    }
}

void output(int n, Triangle t[n], Triangle smallest)
{
  
}



