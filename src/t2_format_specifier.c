#include <stdio.h>

int run(void) {
  // int age = 3;
  // printf("Your age is %d.\n", age);
  // float price = 19.99;
  // printf("$%.2f\n", price);
  // double pi = 3.141592;
  // printf("PI: %.6lf\n", pi);
  // char currency = '$';
  // printf("currency: %c\n", currency);
  // char name[] = "aoaochan";
  // printf("Your name is %s.\n", name);

  // int num1 = 1, num2 = 10, num3 = 100;
  // printf("%3d\n%3d\n%3d\n", num1, num2, num3);
  // printf("%4d\n%4d\n%4d\n", num1, num2, num3);
  // printf("%-4d\n%-4d\n%-4d\n", num1, num2, num3);

  // int num1 = 1, num2 = 10, num3 = -100;
  // printf("%+d\n%+d\n%+d\n", num1, num2, num3);

  float price1 = 19.99, price2 = 1.50, price3 = -100.00;
  // printf("%f\n%f\n%f\n", price1, price2, price3);
  // printf("%.f\n%.f\n%.f\n", price1, price2, price3);
  // printf("%.1f\n%.1f\n%.1f\n", price1, price2, price3);
  // printf("%.2f\n%.2f\n%.2f\n", price1, price2, price3);
  // printf("%7.2f\n%7.2f\n%7.2f\n", price1, price2, price3);
  printf("%+7.2f\n%+7.2f\n%+7.2f\n", price1, price2, price3);

  return 0;
}
