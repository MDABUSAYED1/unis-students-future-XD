// finding the number of days from jan 1

#include <stdio.h>

int main()
{
  int month, daysSince = 0, i;
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  printf("Enter the month: ");
  scanf("%d", &month);

  for (i = 1; i <= 12; i++)
  {
    if (i <= month)
    {
      daysSince += days[i - 1];
    }
    if (i == month)
    {
      printf("Last day of month #%d is %d/%d\n", month, days[i - 1], month);
    };
  };
  printf("%d/%d is %d days since Jan 1\n", days[i - 1], month, daysSince);

  return 0;
}