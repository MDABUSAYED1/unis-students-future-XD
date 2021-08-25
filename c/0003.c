// arbitrary math solution

#include <stdio.h>
#include <math.h>

int main()
{
  int n, sum = 0;

  printf("Enter value : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    sum += pow(i, 2) - pow((i - 1), 2) + 1;
  };

  printf("%d\n", sum);

  return 0;
}