
// finding out the number of total run scorer and max scorer in a 5 match t-20 series

#include <stdio.h>

int main()
{
  // result 0f 11 players in a 5 match series
  int scoreBoard[100][100] = {
      {20, 30, 9, 0, 2, 0, 7, 8, 10, 2, 0},
      {40, 30, 50, 71, 0, 2, 0, 10, 2, 10, 11},
      {9, 0, 0, 3, 0, 8, 40, 31, 30, 26, 20},
      {0, 5, 8, 20, 41, 53, 46, 30, 26, 10, 11},
      {11, 0, 9, 40, 20, 9, 2, 46, 30, 10, 11}},
      totalRuns[100];

  // summing the value of players
  for (int i = 0; i < 11; i++)
  {
    totalRuns[i] = 0;
    for (int j = 0; j < 5; j++)
    {
      totalRuns[i] = totalRuns[i] + scoreBoard[j][i];
    }
  }

  //printing the toatl scores of values
  for (int i = 0; i < 11; i++)
  {
    printf("score of player %d : %d\n", i + 1, totalRuns[i]);
  }

  // finding the total run of the max run scorer
  int maxScorer = totalRuns[0], maxScoredPlayer = 0;
  for (int i = 0; i < 11; i++)
  {
    if (totalRuns[i] > maxScorer)
    {
      maxScorer = totalRuns[i];
      maxScoredPlayer = i;
    }
  }

  // printing the max scorer res
  printf("The max scorer is number %d player and the score is %d\n", maxScoredPlayer, maxScorer);

  return 0;
}
