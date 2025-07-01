#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool getUnsignedInteger(int* x);
bool getUnsignedFloat(float* x);

int run(void) {
  // printf("Hello, world! (from t44_realloc.c)");

  int number = 0;

  printf("Enter the number of prices: ");
  if (!getUnsignedInteger(&number)) {
    fprintf(stderr, "Invalid Input\n");
    return 1;
  }

  float *prices = malloc(number * sizeof(float));

  if (!prices) {
    perror("float *prices = malloc");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter price #%d: $", i + 1);
    if (!getUnsignedFloat(&prices[i])) {
      fprintf(stderr, "Invalid Input\n");
      free(prices);
      return 1;
    }
  }

  int newNumber = 0;
  printf("Enter a new number of prices: ");
  if (!getUnsignedInteger(&newNumber)) {
    fprintf(stderr, "Invalid Input\n");
    free(prices);
    return 1;
  }

  float *temp = realloc(prices, newNumber * sizeof(float));

  if (!temp) {
    perror("float *temp = realloc");
    free(prices);
    return 1;
  }

  prices = temp;
  temp = NULL;

  for (int i = number; i < newNumber; i++) {
    printf("Enter price #%d: $", i + 1);
    if (!getUnsignedFloat(&prices[i])) {
      fprintf(stderr, "Invalid Input\n");
      free(prices);
      return 1;
    }
  }

  for (int i = 0; i < newNumber; i++) printf("$%.2f ", prices[i]);

  free(prices); 
  prices = NULL;

  return 0;
}

bool getUnsignedInteger(int* x) {
  return !(scanf("%d", x) != 1 || *x <= 0);
}
bool getUnsignedFloat(float* x) {
  return !(scanf("%f", x) != 1 || *x <= 0.0f);
}
