#include<stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
  Triangle t1;
  printf("Enter the base and altitude of the triangle:\n");
  scanf("%f%f",&t1.base,&t1.altitude);
  return t1;
}
void find_area(Triangle *t)
{
  t->area=(t->base*t->altitude)/2.0;
}
void output(Triangle t)
{
  printf("The area of the triangle with base: %f and altitude: %f is %f.",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}

