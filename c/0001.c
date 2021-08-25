// finding the area of trapezoid

#include <stdio.h>

double findAreaOfTrapezoid(int a, int b, int h);

int main()
{
  // taking input
  float a, b, h;
  scanf("%d%d%d", &a, &b, &h);

  // calling the function
  double findAreaOfTrapezoid(int a, int b, int h);

  return 0;
};

// calculating the area
double findAreaOfTrapezoid(int a, int b, int h)
{
  float res = 0.5 * (a + b) * h;

  return res;
}