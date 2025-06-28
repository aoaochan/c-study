#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t23_break_and_continue.c)");

  for (int i = 1; i <= 10; i++) {
    if (i == 4) break; // 1 2 3 
    if (i == 4) continue; // 1 2 3 5 6 7 8 9 10 

    printf("%d ", i);
  }

  return 0;
}
