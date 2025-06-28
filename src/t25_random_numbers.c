#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int run(void) {
  // printf("Hello, world! (from t25_random_numbers.c)");

  // printf("%d", rand());

  // srand(time(NULL)); // ⭐ Seed Initializer ⭐
  // printf("%d", rand());
  // printf("%d", RAND_MAX);

  // const int MAX = 10;
  // for (int i = 0; i < 10; i++) printf("%d ", rand() % MAX);
  // printf("\n");
  // for (int i = 0; i < 10; i++) printf("%d ", rand() % MAX);
  // printf("\n");
  // for (int i = 0; i < 10; i++) printf("%d ", rand() % MAX);
  // printf("\n");
  // for (int i = 0; i < 10; i++) printf("%d ", rand() % MAX);

  // int min = 4, max = 9;
  // for (int i = 0; i < 20; i++) printf("%d ", rand() % (max - min + 1) + min);

  srand(time(NULL)); // ⭐ Seed Initializer ⭐
  int min = 1, max = 6; //, randomNum = rand() % (max - min + 1) + min;
  // printf("%d", randomNum);
  for (int i = 0; i < 3; i++) printf("%d ", rand() % (max - min + 1) + min);

  return 0;
}
