#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int HWScores [5] = {90, 100, 85, 95, 80};
    int sum = 0;

    printf("The HW Scores are:");
    for (int i = 0; i < 5; i++)
    {
      printf("%d",HWScores[i]);
      sum += HWScores[i];
    }
    printf("\nThe sum is %d and the average is %d\\n", sum, sum / 5);

    system("pause");
    return 0;
  }
