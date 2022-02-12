#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the side:\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  int i=0;
  if(a!=b && b!=c && c!=a)
     i=1;
  return i;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene>0)
  {
    printf("The triangle of sides %d %d %d is scalene\n",a,b,c);
  }
  else
   printf("It is not scalene\n");
}
int main()
{
  int l,m,n,o;
  l=input_side();
  m=input_side();
  n=input_side();
  o=check_scalene(l,m,n);
  output(l,m,n,o);
  return 0;
}