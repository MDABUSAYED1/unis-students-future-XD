// find the sum of two matrices

#include <stdio.h>

int main()
{
  int rows, cols, firstMat[100][100], secondMat[100][100], sum[100][100];

  //taking input of rows and columns
  printf("Enter number of rows : ");
  scanf("%d", &rows);

  printf("Enter number of columns : ");
  scanf("%d", &cols);

  // taking input for the first matrix
  printf("Enter first matrix elements : \n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &firstMat[i][j]);
    }
  }

  // taking input for the second matrix
  printf("Enter second matrix elements : \n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &secondMat[i][j]);
    }
  }

  // adding the matrices
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum[i][j] = firstMat[i][j] + secondMat[i][j];
    }
  }

  // printing out the result
  printf("Sum : \n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d  ", sum[i][j]);
      if (j == cols - 1)
      {
        printf("\n");
      }
    }
  }

  return 0;
}
