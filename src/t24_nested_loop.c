#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t24_nested_loop.c)");

  // for (int i = 1; i < 4; i++) {
  //   for (int j = 1; j < 10; j++) {
  //     printf("%d ", j); // 1 - 9
  //   }
  //   printf("\n");
  // }

  // for (int i = 1; i <= 10; i++) {
  //   for (int j = 1; j <= 10; j++) {
  //     printf("%3d ", i * j);
  //   }
  //   printf("\n");
  // }

  int rows = 0, colums = 0;
  char symbol = '\0';
  
  printf("Enter the # of rows: ");
  scanf_s("%d", &rows, sizeof(int));

  printf("Enter the # of columns: ");
  scanf_s("%d", &colums, sizeof(int));

  printf("Enter a symbol to use: ");
  scanf_s(" %c", &symbol, sizeof(char));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < colums; j++) {
      printf("%c", symbol);
    }
    printf("\n");
  }

  return 0;
}
