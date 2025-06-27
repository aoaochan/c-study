#include <stdio.h>
#include <string.h>

int run(void) {
  char item[50] = "";
  float price = 0.0f;
  int quantity = 0;
  char currency = '$';
  float total = 0.0f;

  printf("What item would you like to buy?: ");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("What is the price for each?: %c", currency);
  scanf_s(" %f", &price, sizeof(float));

  printf("How many would you like?: ");
  scanf_s(" %d", &quantity, sizeof(int));

  total = price * quantity;

  printf("\nYou have bought %d %s/s\n", quantity, item);
  printf("The Total is: %c%.2f\n", currency, total);

  return 0;
}
