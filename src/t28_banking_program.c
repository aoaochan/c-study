#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int run(void) {
  // printf("Hello, world! (from t28_banking_program.c)");

  int choice = 0;
  float balance = 0.0f;

  printf("*** WELCOME TO THE BANK ***");

  while (choice != 4) {
    printf("\nSelect an option:\n\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        checkBalance(balance);
        break;
      case 2:
        balance += deposit();
        break;
      case 3:
        balance -= withdraw(balance);
        break;
      case 4:
        printf("\nThank you for using the bank!\n");
        break;
      default:
        printf("\nInvalid choice! Please select 1 - 4\n");
        break;
    }
  }

  return 0;
}

void checkBalance(float balance) {
  printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit() {
  float amount = 0.0f;

  printf("\nEnter amount to deposit: $");
  scanf("%f", &amount);

  if (amount < 0) {
    printf("Invalid amount\n");
    return 0.0f;
  }

  printf("Successfully deposited $%.2f\n", amount);

  return amount;
}

float withdraw(float balance) {
  // return 0.0f;
  float amount = 0.0f;

  printf("\nEnter amount to withdraw: $");
  scanf("%f", &amount);

  if (amount < 0 || amount > balance) {
    printf("Invalid amount\n");
    return 0.0f;
  }

  printf("Successfully withdrew $%.2f\n", amount);

  return amount;
}
