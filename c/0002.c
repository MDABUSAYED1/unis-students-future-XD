// printing the even and odd number in order

#include <stdio.h>

int main()
{
  int numOfLines;
  int counter = 1;

  printf("Enter number of lines : ");
  scanf("%d", &numOfLines);

  for (int i = 0; i <= numOfLines; i++)
  {

    if (counter % 2 == 0)
    {
      for (int j = 1; j <= counter; j += 2)
      {
        printf("%d ", j);
      }
      printf("\n");
    }

    if (counter % 2 != 0)
    {
      for (int k = 2; k <= counter; k += 2)
      {
        printf("%d ", k);
      }
      printf("\n");
    }

    counter += 1;
  }
}