#include <stdio.h>

int input_n()
{
  int s;
  printf("Enter a number:\n");
  scanf("%d", &s);
  return s;
}

int sum_n(int n)
{
  int sum;
  sum=n*(n+1)/2;
  return sum;
}

void output(int n, int sum)
{
  printf("sum of natural numbers is: %d", sum);
}

int main()
{
  int n=input_n();
  int sum=sum_n(n);
  output(n, sum);
  return 0;
}