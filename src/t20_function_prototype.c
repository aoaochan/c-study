#include <stdio.h>
#include <stdbool.h>

void hello(char *name, int age); // function prototype
bool ageCheck(int age);

int run(void) {
  // printf("Hello, world! (from t20_function_prototype.c)");

  char *name = "Spongebob";
  int age = 30;

  hello(name, age);
  if (ageCheck(age)) printf("You are old enough to work at the Krusty Krab!");
  else printf("You must be 16+ to work at the Krusty Krab!");

  return 0;
}

void hello(char *name, int age) {
  printf("Hello, %s!\nYou are %d years old.\n", name, age);
}
bool ageCheck(int age) {
  return age >= 16;
}
