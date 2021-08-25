// PALINDROME using numbers array

#include <stdio.h>

int main()
{
  int arr[10];

  int i = 0, isPalindrome = 0;
  while (i < 10)
  {
    printf("Enter %d element of array : ", i);
    scanf("%d", &arr[i]);
    i++;
  }

  for (int j = 0; j < i / 2; j++)
  {
    if (arr[j] != arr[i - j - 1])
    {
      isPalindrome = 1;
      break;
    }
  }

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
