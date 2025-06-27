#include <stdio.h>
// #include <stdbool.h>
#include <string.h>

int run(void) {
  // printf("Hello, world! (from t10_if_statements.c)");

  // int age = 0;
  // printf("Enter your age: ");
  // scanf_s("%d", &age, sizeof(int));
  // if (age >= 65) printf("You are a senior.");
  // else if (age >= 18) printf("You are an adult.");
  // else if (age < 0) printf("You haven't been born yet.");
  // else if (age == 0) printf("You are a newborn.");
  // else printf("You are a child.");

  // bool isStudent = true;
  // if (isStudent) printf("You are a student.\n");
  // else printf("You are NOT a student.\n");

  char name[50] = "";
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';
  if (strlen(name) == 0) printf("You didn't enter your name.");
  else printf("Hello, %s!", name);

  return 0;
}
