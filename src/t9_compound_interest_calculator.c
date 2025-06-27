#include <stdio.h>
#include <math.h>

int run(void) {
  // printf("Hello, world! (from t9_compound_intereset_calculator.c)");

  double principal = 0.0, rate = 0.0, total = 0.0;
  int years = 0, timesCompounded = 0;
  char symbolPercent = '%';

  printf("Compound Interset Calculator\nEnter the principal (P): ");
  scanf_s("%lf", &principal, sizeof(double));

  printf("Enter the interest rate %c (r): ", symbolPercent);
  scanf_s("%lf", &rate, sizeof(double));

  rate = rate / 100;

  printf("Enter the # of years (t): ");
  scanf_s("%d", &years, sizeof(int));

  printf("Enter # of times compounded per year (n): ");
  scanf_s("%d", &timesCompounded, sizeof(int));
  
  total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

  printf("After %d years, the total will be $%.2lf", years, total);

  return 0;
}
