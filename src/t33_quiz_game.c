#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

int run(void) {
  // printf("Hello, world! (from t33_quiz_game.c)");

  char questions[][100] = {
    "What is the largest planet in the solar system?",
    "What is the hottest planet?",
    "what planet has the most moons?",
    "Is the Earth flat?"
  }, options[][100] = {
    "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
    "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
    "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
    "A. Yes\nB. No\nC. Maybe\nD. Sometimes"
  }, answerKey[] = {'A', 'B', 'D', 'B'}, guess = '\0';
  int questionCount = sizeof(questions) / sizeof(questions[0]), score = 0;

  printf("*** QUIZ GAME ***\n");

  for (int i = 0; i < questionCount; i++) {
    printf("\n%s\n\n%s\n\nEnter your choice: ", questions[i], options[i]);
    scanf(" %c", &guess);

    guess = toupper(guess);

    if (guess == answerKey[i]) {
      printf("CORRECT!\n");
      score++;
    } else {
      printf("WRONG!\n");
    }
  }

  printf("\nYour score is %d out of %d points\n", score, questionCount);

  return 0;
}
