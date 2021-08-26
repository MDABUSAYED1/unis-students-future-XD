// returning a string number to decimal  number in reverse order

#include <stdio.h>
#include <string.h>

int main()
{
  char string[10];
  int res = 0, reversed;

  // taking number in string format
  printf("Enter a number in string format : ");
  scanf("%s", string);

  int len = strlen(string);

  // reversing the value and making it int
  for (int i = 0; i < len; i++)
  {
    res = res * 10 + (string[len - i - 1] - '0');
  }

  printf("%d", res);

  return 0;
}
