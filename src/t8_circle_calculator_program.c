#include <stdio.h>
#include <math.h>

int run(void) {
  // printf("Hello, world!   (from t8_circle_calculator_program.c)");

  const double PI = 3.141592;
  double radius = 0.0, area = 0.0, surfaceArea = 0.0, volume = 0.0;

  printf("Enter the radius: ");
  scanf_s("%lf", &radius, sizeof(double));

  area = PI * pow(radius, 2);
  surfaceArea = 4 * area;
  volume = (4.0 / 3.0) * PI * pow(radius, 3);

  printf("Arae: %.2lf\n", area);
  printf("Surface Area: %.2lf\n", surfaceArea);
  printf("Volume: %.2lf\n", volume);

  return 0;
}
