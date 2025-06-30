#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t30_arrays_and_user_input.c)");

  int scores[5] = {0};
  int lengthOfScores = sizeof(scores) / sizeof(int);

  for (int i = 0; i < lengthOfScores; i++) {
    printf("Enter a score: ");
    scanf("%d", &scores[i]);
  }

  for (int i = 0; i < lengthOfScores; i++) printf("%d ", scores[i]);

  return 0;
}
