#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t41_read_files.c)");

  FILE *fptr = fopen("input.txt", "r");

  if (!fptr) {
    perror("fopen");
    return 1;
  }

  char buffer[1024] = {0};

  while (fgets(buffer, sizeof(buffer), fptr)) printf("%s", buffer);

  fclose(fptr);

  return 0;
}
