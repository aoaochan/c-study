#include <stdio.h>
#include <string.h>

int run(void) {
  // printf("Hello, world! (from t6_mad_libs_game.c)");

  char noun[50] = "", verb[50] = "", adjective1[50] = "", adjective2[50] = "", adjective3[50] = "";

  printf("Enter an adjective (description): ");
  fgets(adjective1, sizeof(adjective1), stdin);
  adjective1[strlen(adjective1) - 1] = '\0';
  
  printf("Enter a noun (animal or person): ");
  fgets(noun, sizeof(noun), stdin);
  noun[strlen(noun) - 1] = '\0';

  printf("Enter an adjective (description): ");
  fgets(adjective2, sizeof(adjective2), stdin);
  adjective2[strlen(adjective2) - 1] = '\0';

  printf("Enter a verb (ending w/ -ing): ");
  fgets(verb, sizeof(verb), stdin);
  verb[strlen(verb) - 1] = '\0';

  printf("Enter an adjective (description): ");
  fgets(adjective3, sizeof(adjective3), stdin);
  adjective3[strlen(adjective3) - 1] = '\0';

  printf("\n%s %s %s %s %s", adjective1, noun, adjective2, verb, adjective3);

  return 0;
}
