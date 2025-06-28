#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int run(void) {
  // printf("Hello, world! (from t26_number_guessing_game.c)");
  
  srand(time(NULL));
  int min = 1, max = 100, answer = rand() % (max - min + 1) + min, input = -1, tries = 0;

  printf("*** NUMBER GUESSING GAME *** (The Answer is %d)\n", answer);

  while (input != answer) {
    printf("Guess the number between 1 - 100 (%d tries): ", tries);
    scanf_s("%d", &input, sizeof(int));

    tries++;
    
    if (input == answer) printf("CORRECT!\n");
    else if (input < answer) printf("TOO LOW!\n");
    else printf("TOO HIGH!\n");
  }

  printf("The answer is %d\nIt took you %d tries.", answer, tries);

  return 0;
}
