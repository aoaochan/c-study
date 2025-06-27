#include <stdio.h>

int run(void) {
  // printf("Hello, world! (from t12_temperature_program.c)");

  char choice = '\0';
  float fahrenheit = 0.0f, celsius = 0.0f;

  printf("Temperature Conversion Program\nC. Celsius to Fahrenheit\nF. Fahrenheit to Celsius\nIs the temp in Celsius (C) or Fahrenheit (F)?: ");
  scanf_s("%c", &choice, sizeof(char));

  if (choice == 'C') {
    printf("Enter the temperature in Celsius: ");
    scanf_s("%f", &celsius, sizeof(float));

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f Celsius is equal to %.1f Fahrenheit.", celsius, fahrenheit);
  } else if (choice == 'F') {
    printf("Enter the temperature in Fahrenheit: ");
    scanf_s("%f", &fahrenheit, sizeof(float));

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.1f Fanrenheit is equal to %.1f Celsius.", fahrenheit, celsius);
  } else {
    printf("Invalid choice! Please select C or F\n");
  }

  return 0;
}
