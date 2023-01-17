#include <stdio.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  
}

Point input_point()
{
  Point p;
  printf("Enter the x and y coordinates:");
  if(scanf("%f%f",&p.x,&p.y));
  return p;
}

Line input_line()
{
  Line l;
  printf("Enter point 1:");
  l.p1 = input_point();
  printf("Enter point 2:");
  l.p2 = input_point();
  return l;
}