#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice();
int getComputerChoice();
void checkWinner(int userChoice, int computerChoice);

int run(void) {
  // printf("Hello, world! (from t27_rock_paper_scissors.c)");

  srand(time(NULL));

  printf("*** ROCK PAPER SCISSORS ***\n");

  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  checkWinner(userChoice, computerChoice);

  return 0;
}

int getUserChoice() {
  int option = 0;

  while (option < 1 || option > 3) {
    printf("Choose an option\n1. ROCK\n2. PAPER\n3. SCISSORS\nEnter your choice: ");
    scanf("%d", &option);

    switch (option) {
      case 1: printf("You choose ROCK!\n"); break;
      case 2: printf("You choose PAPER!\n"); break;
      case 3: printf("You choose SCISSORS!\n"); break;
      default: printf("Invalid option! Please enter a valid option.\n"); break;
    }
  }

  return option;
}

int getComputerChoice() {
  int option = rand() % 3 + 1;

  switch (option) {
    case 1: printf("Computer choose ROCK!\n"); break;
    case 2: printf("Computer choose PAPER!\n"); break;
    case 3: printf("Computer choose SCISSORS!\n"); break;
  }

  return option;
}

void checkWinner(int userChoice, int computerChoice) {
  if (userChoice == computerChoice) {
    printf("It's a Draw!\n");
  } else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)) {
    printf("You Win!");
  } else {
    printf("You Lose!");
  }
}
