#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int run(void) {
  // printf("Hello, world! (from t43_calloc.c)");

  int number = 0;
  printf("Enter the number of players: ");
  scanf("%d", &number); 

  int *scores = calloc(number ,sizeof(int));

  if (!scores) {
    perror("malloc");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter score #%d: ", i + 1);
    scanf("%d", &scores[i]);
  }

  for (int i = 0; i < number; i++) {
    printf("%d ", scores[i]);
  }

  free(scores);
  scores = NULL;

  return 0;
}
