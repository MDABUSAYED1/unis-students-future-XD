// finding the sum of array inputs for ten values given by the user

#include <stdio.h>

int main()
{
  int A[10] = {};
  int B[10] = {};
  int C[10] = {};
  int sum = 0, arrayAInput, arrayBInput, i = 0;
  int checker = 0;
  int c = 0;

  while (checker < 10)
  {
    printf("Give input for array1: ");
    scanf("%d", &arrayAInput);
    printf("Give input for array2: ");
    scanf("%d", &arrayBInput);

    A[i] = arrayAInput;
    B[i] = arrayBInput;

    sum += (A[i] + B[i]);
    C[i] = sum;

    printf("%d\n", sum);
    i++;
    checker++;
  }

  return 0;
}