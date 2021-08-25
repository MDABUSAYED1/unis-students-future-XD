// printing the even and odd number in order

// method - 1
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

// method - 2
#include <stdio.h>
int main()
{
  int num;

  printf("Enter an integer\n");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    if (i % 2 != 0)
    {

      for (int j = 1; j <= i; j++)
        if (j % 2 != 0)
          printf("%d ", j);

      printf("\n");
    }
    else
    {

      for (int j = 2; j <= i; j++)
        if (j % 2 == 0)
          printf("%d ", j);

      printf("\n");
    }
  }
  return 0;
}