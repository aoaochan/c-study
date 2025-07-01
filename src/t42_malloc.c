#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int run(void) {
  // printf("Hello, world! (from t42_malloc.c)");

  int number = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char)); // char grades[5] = {0};

  if (!grades) {
    perror("grades");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter grade #%d: ", i + 1);
    scanf(" %c", &grades[i]);
  }

  for (int i = 0; i < number; i++) {
    printf("%c ", grades[i]);
  }

  free(grades);
  grades = NULL; // prevent dangling pointer

  return 0;
}
