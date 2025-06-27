#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t13_switch.c)");

  // int dayOfWeek = 0;
  // printf("Enter a number (1-7): ");
  // scanf_s("%d", &dayOfWeek, sizeof(int));

  char dayOfWeek = '\0';
  printf("Enter a day of the week (M, T, W, R, F, S, U): ");
  scanf_s("%c", &dayOfWeek, sizeof(char));

  // if (dayOfWeek == 1) printf("It's Monday.");
  // else if (dayOfWeek == 2) printf("It's Tuesday.");
  // else if (dayOfWeek == 3) printf("It's Wednesday.");
  // else if (dayOfWeek == 4) printf("It's Thursday.");
  // else if (dayOfWeek == 5) printf("It's Friday.");
  // else if (dayOfWeek == 6) printf("It's Saturday.");
  // else if (dayOfWeek == 7) printf("It's Sunday.");
  // else printf("Invalid dayOfWeek! Please enter a number (1-7).");

  // switch (dayOfWeek) {
  //   case 1: printf("It's Monday."); break;
  //   case 2: printf("It's Tuesday."); break;
  //   case 3: printf("It's Wednesday."); break;
  //   case 4: printf("It's Thursday."); break;
  //   case 5: printf("It's Friday."); break;
  //   case 6: printf("It's Saturday."); break;
  //   case 7: printf("It's Sunday."); break;
  //   default: printf("Invalid dayOfWeek! Please enter a number (1-7)."); break;
  // }

  switch (dayOfWeek) {
    case 'M': printf("It's Monday."); break;
    case 'T': printf("It's Tuesday."); break;
    case 'W': printf("It's Wednesday."); break;
    case 'R': printf("It's Thursday."); break;
    case 'F': printf("It's Friday."); break;
    case 'S': printf("It's Saturday."); break;
    case 'U': printf("It's Sunday."); break;
    default: printf("Invalid dayOfWeek! Please enter a day of the week (M, T, W, R, F, S, U)."); break;
  }

  return 0;
}
