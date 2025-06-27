#include <stdio.h>

// int r1, r2; // globalvar // not recommend - hard to debug

int add(int x, int y) {
  int result = x + y;
  return result;
}
int subtract(int x, int y) {
  int result = x - y;
  return result;
}

int run(void) {
  // printf("Hello, world! (from t19_variable_scope.c)");

  int x = 5, y = 6;
  int r1 = add(x, y), r2 = subtract(x, y);
  // r1 = add(x, y);
  // r2 = subtract(x, y);
  
  printf("add(%d, %d): %d\nsubtract(%d, %d): %d", x, y, r1, x, y, r2);

  return 0;
}
