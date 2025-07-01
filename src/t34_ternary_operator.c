#include <stdio.h>
// #include <stdbool.h>

int run(void) {
  // printf("Hello, world! (from t34_ternary_operator.c)");

  /*int x = 5, y = 6, max = x > y ? x : y;
  printf("%d %d %d", x, y, max);*/

  /*bool isOnline = true;
  printf("%s", isOnline ? "online" : "offline");*/

  /*nt number = 8;
  printf("%d is %s", number, number % 2 == 0 ? "even" : "odd");*/

  /*int age = 21;
  printf("%s", age > 18 ? "adult" : "child");*/

  int hours = 11, minutes = 30;
  char *meridiem = hours < 12 ? "AM" : "PM";
  printf("%02d:%02d %s", hours, minutes, meridiem);

  return 0;
}
