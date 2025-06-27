#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t15_calculator.c)");

  char operator = '\0';
  double num1 = 0.0, num2 = 0.0, result = 0.0;

  printf("Enter the first number: ");
  scanf_s(" %lf", &num1, sizeof(double));

  printf("Enter the operator (+ - * /): ");
  scanf_s(" %c", &operator, sizeof(char));

  printf("Enter the second number: ");
  scanf_s("%lf", &num2, sizeof(double));

  switch (operator) {
    case '+': result = num1 + num2; break;
    case '-': result = num1 - num2; break;
    case '*': result = num1 * num2; break;
    case '/': 
      if (num2 == 0) {
        printf("You can't devide by zero!");
        return 0;
      }
      result = num1 / num2; 
      break;
    default: printf("Invalid operator! Please enter the operator (+ - * /)."); return 0;
  }

  printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);

  return 0;
}
