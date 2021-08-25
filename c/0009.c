// PALINDROME using numbers array

#include <stdio.h>

int main()
{
  int arr[10];

  int i = 0, isPalindrome = 0;

  // taking input for the array
  while (i < 10)
  {
    printf("Enter %d element of array : ", i);
    scanf("%d", &arr[i]);
    i++;
  }

  // checking if the elements matches
  for (int j = 0; j < i / 2; j++)
  {
    if (arr[j] != arr[i - j - 1])
    {
      isPalindrome = 1;
      break;
    }
  }

  // printing the result according to condition
  if (isPalindrome == 0)
  {
    printf("The array is a palindrome\n");
  }
  else
  {
    printf("The array is not a palindrome\n");
  }

  return 0;
}
