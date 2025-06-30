#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t31_2d_arrays.c)");

  /*int numbers[][3] = {
    { 1, 2, 3 },
    { 4, 5, 6 },
    { 7, 8, 9 },
    { 10, 11, 12 },
  };
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%02d ", numbers[i][j]);
    }
    printf("\n");
  }*/

  char numpad[][3] = {
    {'1' ,'2', '3'},
    {'4', '5', '6'},
    {'7' ,'8', '9'},
    {'*', '0', '#'},
  };
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%c ", numpad[i][j]);
    }
    printf("\n");
  }

  return 0;
}
