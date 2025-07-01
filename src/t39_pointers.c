#include <stdio.h>

void birthday(int* age);

int run(void) {
  // printf("Hello, world! (from t39_pointers.c)");

  /*int age = 5;
  printf("%p", &age);*/ 

  int age = 5; // , *pAge = &age;
  // printf("%p // %p", &age, pAge);
  birthday(&age); // pAge);
  printf("You are %d years old.", age);

  return 0;
}

void birthday(int* age) {
  (*age)++;
}
