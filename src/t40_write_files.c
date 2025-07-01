#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t40_write_files.c)");

  FILE *pFile = fopen("output.txt", "w");

  if (pFile == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  char text[] = "BOOTY BOOTY BOOTY\nROCKIN' EVERYWHERE!";
  
  fprintf(pFile, "%s", text);

  printf("File was written successfully!\n");

  fclose(pFile);

  return 0;
}
