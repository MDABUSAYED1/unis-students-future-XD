// checking if a number exists in the 2D array

#include <stdio.h>

int main()
{
  int found = 0, x, A[100][100], rows, cols, isTrue = 0, val;

  // taking the number of rows and cols in a matrice
  printf("Number of rows: ");
  scanf("%d", &rows);

  printf("Number of columns: ");
  scanf("%d", &cols);

  // taking input for the matrice
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  // taking a user given value
  printf("Enter a value : ");
  scanf("%d", &val);

  // checking if the element exists
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (A[i][j] == val)
      {
        isTrue = 1;
      }
    }
  }

  // printing result according to the conditions
  if (isTrue == 0)
  {
    printf("Not Found\n");
  }
  else
  {
    printf("Found\n");
  }

  return 0;
}
