#include <stdio.h>
// #include <stdbool.h>

// int square(int num) {
//   return num * num;
// }
// double square(double num) {
//   return num * num;
// }
// double cube(double num) {
//   return pow(num, 3);
// }
// bool ageCheck(int age) {
//   return age >= 18;
// }
int getMax(int x, int y) {
  if (x >= y) return x;
  return y;
}

int run(void) {
  // printf("Hello, world! (from t18_return.c)");
  
  // int x = square(2), y = square(3), z = square(4);
  // printf("%d %d %d", x, y, z);

  // double x = square(2.1), y = square(3.2), z = square(4.3);
  // double x = cube(2.0), y = cube(3.0), z = cube(4.0);
  // printf("%.2lf %.2lf %.2lf", x, y, z);

  // int age = 21;
  // if (ageCheck(age)) printf("ageCheck is True.");
  // else printf("ageCheck is False.");

  int max = getMax(2, 3);
  printf("getMax(2, 3): %d", max);

  return 0;
}
