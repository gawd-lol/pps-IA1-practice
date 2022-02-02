#include <stdio.h>

struct _complex
{
float real,imaginary;
};

typedef struct _complex Complex;

int get_n()
{
  int n,i;
 printf("Enter number of Complex number to be added\n");
 scanf("%d",&n);
}

Complex input_complex()
{
  Complex h;
  printf("Enter a complex number : ");
  scanf("%f %f",&h.real,&h.imaginary);
  return h;
}

void input_n_complex(int n, Complex c[n])
{}

Complex add(Complex a, Complex b)
{}

Complex add_n_complex(int n, Complex c[n])
{}

void output(int n, Complex c[n], Complex result)
{}

int main()
{}