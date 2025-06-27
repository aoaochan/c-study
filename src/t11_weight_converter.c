#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t11_weight_converter.c)");

  int choice = 0;
  float pounds = 0.0f, kilograms = 0.0f;

  printf("Weight Conversion Calculator\n1. Kilograms to Pounds\n2. Pounds to Kilograms\nEnter your choice (1 or 2): ");
  scanf_s("%d", &choice, sizeof(int));

  if (choice == 1) {
    printf("Enter the weight in kilograms: ");
    scanf_s("%f", &kilograms, sizeof(float));

    pounds = kilograms * 2.20462;

    printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
  } else if (choice == 2) {
    printf("Enter the weight in pounds: ");
    scanf_s("%f", &pounds, sizeof(float));

    kilograms = pounds / 2.20462;
    
    printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
  } else {
    printf("Invalid choice! Please enter 1 or 2\n");
  }

  return 0;
}
