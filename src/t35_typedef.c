#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int run(void) {
  // printf("Hello, world! (from t35_typedef.c)");

  /* // int x = 3, y = 4, z = x + y;
  Number x = 3, y = 4, z = x + y;
  printf("%d", z);*/

  /*String name = "aoaochan";
  printf("%s", name);*/

  Initials user1 = "AA", user2 = "BB", user3 = "CC", user4 = "DD";
  printf("%s %s %s %s", user1, user2, user3, user4);

  return 0;
}
