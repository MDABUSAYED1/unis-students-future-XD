// how to take input in an array

#include <stdio.h>

int main()
{
  int *num;

  printf("Enter a code : ");
  scanf("%d", num);

  int a = num[0];

  printf("%d", a);

  return 0;
}
