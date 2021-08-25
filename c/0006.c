// finding if the number is odd or even

#include <stdio.h>

void switchFunc(int num);

int main()
{
  int num;

  printf("Enter a number : ");
  scanf("%d", &num);

  switchFunc(num);

  return 0;
}

void switchFunc(int num)
{
  switch (num % 2)
  {
  case 0:
    printf("the number is even\n");
    break;
  default:
    printf("the number is odd\n");
    break;
  }
}