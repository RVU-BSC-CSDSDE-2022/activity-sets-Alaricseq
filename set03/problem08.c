#include <stdio.h>
typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line(int n);
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
  int n;
}