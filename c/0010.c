// sum of the two largest elements

#include <stdio.h>

int main()
{
  int largestNum = 0, secondLargest = 0, arr[10], counter = 0;

  // taking input into the array
  while (counter < 10)
  {
    printf("Enter the %d element of the array : ", counter);
    scanf("%d", &arr[counter]);
    counter++;
  }

  // finding the largest number in the array
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] > largestNum)
    {
      largestNum = arr[i];
    }
  }

  // finding the second largest in the array
  for (int j = 0; j < 10; j++)
  {
    if (arr[j] < largestNum && arr[j] > secondLargest)
    {
      secondLargest = arr[j];
    }
  }

  // multiplying the two largest nums and printing them out
  int ans = largestNum * secondLargest;

  printf("Answer : %d\n", ans);

  return 0;
}