#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void assignment1();

void swap(int *a, int *b);
void assignment2();

void assignment3();

void assignment4();

void assignment5();

double calAdd(double x, double y);
double calSub(double x, double y);
double calMul(double x, double y);
double calDiv(double x, double y);
bool getNumber(double *x, char *word);

int run(void) {
  // printf("Hello, world! (from t47_pointer_review.c)");
  
  assignment1();
  assignment2();
  assignment3();
  assignment4();
  assignment5();
  
  // Assignment #6
  printf("\n\nAssignment 6: \n");

  int n = 0;

  printf("Enter a number: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    fprintf(stderr, "Invalid Input\n");
    return 1;
  }

  int *nums = malloc(n * sizeof(int));
  
  if (!nums) {
    perror("int *nums = malloc");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    printf("Enter a number #%d: ", i + 1);
    if (scanf("%d", &nums[i]) != 1 || nums[i] <= 0) {
      fprintf(stderr, "Invalid Input\n");
      free(nums);
      return 1;
    }
  }

  for (int i = 0; i < n; i++) printf("%d ", nums[i]);
  printf("\n");

  free(nums);
  nums = NULL;

  // Assignment #7
  printf("\n\nAssignment 7: \n\n*** CALCULATOR ***\n");
  
  int choice = 0;

  while (1) {
    printf("\n1. Add\n2. Sub\n3. Mul\n4. Div\n5. Exit\nEnter your choice: ");

    if (scanf("%d", &choice) != 1 || (choice < 1 || choice > 5)) {
      fprintf(stderr, "Invalid Input\n");
      return 1;
    }

    if (choice == 5) {
      printf("\n\nGood bye.\n\n");
      break;
    }

    double(*fnptrCalculate)(double x, double y);
    double x = 0, y = 0;
    char operatorSymbol = '\0';

    if (!getNumber(&x, "first") || !getNumber(&y, "second")) {
      fprintf(stderr, "Invalid Input\n");
      return 1;
    }

    switch (choice) {
      case 1:
        fnptrCalculate = calAdd;
        operatorSymbol = '+';
        break;
      case 2:
        fnptrCalculate = calSub;
        operatorSymbol = '-';
        break;
      case 3:
        fnptrCalculate = calMul;
        operatorSymbol = '*';
        break;
      case 4:
        if (choice == 4 && y == 0) {
          fprintf(stderr, "Cannot divide by zero.\n");
          continue;
        }
        fnptrCalculate = calDiv;
        operatorSymbol = '/';
        break;
      default: 
        fprintf(stderr, "Invalid Input\n");
        return 1;
    }

    double sum = fnptrCalculate(x, y);
    
    printf("\n%.2lf %c %.2lf = %.2lf\n\n", x, operatorSymbol, y, sum);
  }

  return 0;
}

void assignment1() {
  printf("Assignment 1: \n");
  int x = 42, *ptr = &x;

  printf("%d\n", *ptr);
  *ptr = 50;

  printf("%d\n", *ptr);
}

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}
void assignment2() {
  printf("\n\nAssignment 2: \n");

  int a = 2, b = 4;

  printf("Swap - Before: a=%d, b=%d\n", a, b);

  swap(&a, &b);

  printf("Swap - After: a=%d, b=%d\n", a, b);
}

void assignment3() {
  printf("\n\nAssignment 3: \n");

  char *str = "hello";
  printf("%s\n", str);

  for (int i = strlen(str) - 1; i >= 0; i--) {
    printf("%c", *(str + i));
  }
  printf("\n");
}

void assignment4() {
  printf("\n\nAssignment 4: \n");

  char *fruits[] = { "apple", "banana", "grape", "kiwi" };
  int lengthOfFruits = sizeof(fruits) / sizeof(fruits[0]);

  for (int i = 0; i < lengthOfFruits; i++) {
    printf("Fruit %d: %s\n", i, *(fruits + i));
  }
}

void assignment5() {
  printf("\n\nAssignment 5: \n");

  int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      int *ptr = &arr[i][j];
      printf("%d ", *ptr);
    }
    printf("\n");
  }
}

double calAdd(double x, double y) {
  return x + y;
}
double calSub(double x, double y) {
  return x - y;
}
double calMul(double x, double y) {
  return x * y;
}
double calDiv(double x, double y) {
  return x / y;
}
bool getNumber(double *x, char *word) {
  printf("Enter a %s number: ", word);
  return !(scanf("%lf", x) != 1);
}
