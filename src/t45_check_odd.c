#include <stdio.h>

char* checkOdd(int num);

int run(void) {
  int x = 2, y = 3;
  
  printf("The x is %s.\n", checkOdd(x));
  printf("The y is %s.\n", checkOdd(y));
  
  return 0;
}

char* checkOdd(int num) {
  return num & 1 ? "odd" : "even";
}
