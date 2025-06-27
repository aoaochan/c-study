#include <stdbool.h>
#include <stdio.h>
// #include <string.h>

int run(void) {
  // printf("Hello, world! (from t21_while_loops.c)");

  // int number = 0;
  // // while (number <= 0) {
  // //   printf("Enter a number greater than 0: ");
  // //   scanf_s("%d", &number, sizeof(int));
  // // }
  // do {
  //   printf("Enter a number greater than 0: ");
  //   scanf_s("%d", &number, sizeof(int));
  // } while (number <= 0);

  /*char name[50] = "";
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  while (strlen(name) == 0) {
    printf("Name can't be empty! Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
  }

  printf("Hello, %s!", name);*/

  bool isRunning = true;
  char res = '\0';

  while (isRunning) {
    printf("You are playing a game.\nWould you like to continue? (Y = yes, N = no): ");
    scanf_s(" %c", &res, sizeof(char));

    if (res != 'Y' && res != 'y') isRunning = false;
  }  

  printf("You exit the game.");

  return 0;
}
