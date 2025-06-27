#include <stdio.h>
#include <stdbool.h>

int run(void) {
  // printf("Hello, world! (from t14_nested_if_statements.c)");

  float price = 10.00f;
  bool isStudent = true, isSenior = false;
  char symbolPercent = '%';

  if (isStudent) {
    if (isSenior) {
      printf("You get a student discount of 10%c\n", symbolPercent);
      printf("You get a senior discount of 20%c\n", symbolPercent);
      price *= 0.7;
    } else {
      printf("You get a student discount of 10%c\n", symbolPercent);
      price *= 0.9;
    }
  } else {
    if (isSenior) {
      printf("You get a senior discount of 20%c\n", symbolPercent);
      price *= 0.8;
    }
  }

  printf("The price of ticket is: $%.2f", price);

  return 0;
}
