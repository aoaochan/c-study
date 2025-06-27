#include <stdio.h>
#include <stdbool.h>

int run(void) {
  // printf("Hello, world! (from t16_logical_operators.c)");

  // int temp = 25;
  // if (0 < temp && temp < 30) printf("The temperature is GOOD");
  // else printf("The temperature is BAD");
  // if (temp <= 0 || temp >= 30) printf("The temperature is BAD");
  // else printf("The temperature is GOOD");

  bool isSunny = true;
  // if (isSunny) printf("It's sunny outside.");
  // else printf("It's cloudy outside.");
  if (!isSunny) printf("It's cloudy outside.");
  else printf("It's sunny outside.");

  return 0;
}
