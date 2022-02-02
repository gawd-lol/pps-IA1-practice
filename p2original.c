#include <stdio.h>

int input()
{
  int s;
  printf("Enter the number:\n");
  scanf("%d", &s);
  return s;
}

int cmp(int a, int b, int c)
{
  if((a>b)&&(a>c)||(b=a)&&(a>c))
  {
    return a;
  }
  else if((b>c)&&(b>a)||(a=b)&&(b>c))
  {
    return b;
  }
  else
  {
    return c;
  }
}

void output(int a, int b, int c, int largest)
{
  printf("among %d, %d, %d, %d is greatest", a, b, c, largest);
}

int main()
{
  int r,p,t,s=0;
  r=input();
  t=input();
  p=input();
  s=cmp(r, t, p);
  output(r, t, p, s);
}