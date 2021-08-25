// Transpose matrix

#include <stdio.h>

int main()
{
  int rows, cols, mat[100][100], sum = 0, transMat[100][100];

  //taking input of rows and columns
  printf("Enter number of rows : ");
  scanf("%d", &rows);

  printf("Enter number of columns : ");
  scanf("%d", &cols);

  // taking input for the matrix
  printf("Enter matrix elements : \n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }

  // making the Transpose matrix
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      transMat[j][i] = mat[i][j];
    }
  }

  // printing out the result
  printf("Sum : \n");
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      printf("%d  ", transMat[i][j]);
      if (j == rows - 1)
      {
        printf("\n");
      }
    }
  }

  return 0;
}
