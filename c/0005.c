// finding the sum of odd digits

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, inputNum, remainder, oddNums = 0, numofDigits;

  printf("Enter an integer number : ");
  scanf("%d", &num);

  inputNum = num;
  num = abs(num);

  while (num > 0)
  {
    numofDigits = num % 10;
    num = num / 10;
    remainder = numofDigits % 2;
    if (remainder != 0)
      oddNums = oddNums + numofDigits;
  }

  printf("\n  Sum of Odd digits  %d", oddNums);

  return 0;
}