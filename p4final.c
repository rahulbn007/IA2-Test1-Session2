#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the size of array:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the numbers\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int is_composite(int n)
{
  int i,c=0,j=n;
  for(i=1;i<=j;i++)
    {
      if(n % i == 0)
        c++;
    }
  return c;
}
int sum_composite_numbers(int n, int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
    {
      if(is_composite(a[i])>2)
        sum+=a[i];
    }
  return sum;
}
void out_put(int sum)
{
  printf("The sum of composite numbers is %d.\n",sum);
}
int main()
{
  int x,y;
  x=input_array_size();
  int a[x];
  input_array(x,a);
  y=sum_composite_numbers(x,a);
  out_put(y);
  return 0;
}