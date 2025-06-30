#include <stdio.h>
#include <string.h>

int run(void) {
  // printf("Hello, world! (from t32_arrays_of_strings.c)");

  /*char fruits[][10] = {
    "Apple",
    "Banana",
    "Coconut",
    "Durian"
  };
  int lengthOfFruits = sizeof(fruits) / sizeof(fruits[0]);

  fruits[0][0] = 'e';
  fruits[0][4] = 'A';

  for (int i = 0; i < lengthOfFruits; i++) printf("%s ", fruits[i]);*/

  char names[3][25] = {0};
  int lengthOfNames = sizeof(names) / sizeof(names[0]);

  for (int i = 0; i < lengthOfNames; i++) {
    printf("%d. Enter a name: ", i + 1);
    fgets(names[i], sizeof(names[i]), stdin);
    names[i][strlen(names[i]) - 1] = '\0'; // == names[i][strcspn(names[i], "\n")] = '\0';
  }

  for (int i = 0; i < lengthOfNames; i++) printf("%s ", names[i]);

  return 0;
}
