#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t29_arrays.c)");

  // int number = 10;
  int numbers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  // numbers[0] = 100;
  // printf("%d\n", numbers[0]);
  int lengthOfNumbers = sizeof(numbers) / sizeof(int);
  for (int i = 0; i < lengthOfNumbers; i++) printf("%d ", numbers[i]);
  printf("\n");

  char grades[] = { 'A', 'B', 'C', 'D', 'F' };
  // printf("%c\n", grades[4]);
  for (int i = 0; i < 5; i++) printf("%c ", grades[i]);
  printf("\n");

  char name[] = "aoaochan";
  // printf("%c\n", name[0]);
  for (int i = 0; i < 8; i++) printf("%c", name[i]);
  printf("\n");

  return 0;
}
