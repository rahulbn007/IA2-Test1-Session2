#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number=\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int x=0,i;
  for(i=1;i<=n;i++)
    {
      if(n % i == 0)
        x++;
    }
  return x;
}
void output(int n,int composite)
{
  if(composite>2)
   printf("%d is a Composite number.",n);
  else
    printf("It is not a composite number.");
}
int main()
{
  int a,b;
  a=input_number();
  b=is_composite(a);
  output(a,b);
  return 0;
}