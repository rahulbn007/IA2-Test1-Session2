#include <stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangles:\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t1;
  printf("Enter the base and altitude of the triangle:\n");
  scanf("%f%f",&t1.base,&t1.altitude);
  return t1;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    t[i]=input_triangle();
}
void find_area(Triangle *t)
{
  t->area=(t->base*t->altitude)/2.0;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
   find_area(&t[i]);
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=0;i<n;i++)
  {
     if(small.area>t[i].area)
     {
       small=t[i];
     }  
  }
  return small;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("Amongst the %d triangles with base and height\n",n);
  for(int i=0;i<n;i++)
    printf("%f , %f \n",t[i].base,t[i].altitude);
 printf("The smalles triangle is the triangle with \nBase:%f \nHieght: %f \nAnd its area is %f",smallest.base,smallest.altitude,smallest.area); 
}
int main()
{
  int x;
  x=input_n();
  Triangle t[x],smallest;
  input_n_triangles(x,t);
  find_areas_n(x,t);
  smallest=find_smallest_triangle(x,t);
  output(x,t,smallest);
  return 0;
}
