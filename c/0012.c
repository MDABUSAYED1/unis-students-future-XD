// summation of elements in specific column

#include <stdio.h>

int main()
{
  int rows, cols, mat[100][100], sum = 0, specificCol;

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

  // which column to find sum
  printf("Enter which column to find sum of : ");
  scanf("%d", &specificCol);

  // printing out the result
  printf("Sum of column %d\n", specificCol);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (j == specificCol - 1)
      {
        sum += mat[i][j];
      }
    }
  }
  printf("%d\n", sum);

  return 0;
}
