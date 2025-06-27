#include <stdio.h>
#include <string.h>

int run(void) {
  // printf("Hello, world! (from t4_user_input.c)\n");

  int age = 0;
  float gpa = 0.0f;
  char grade = '\0';
  char name[50] = "";

  printf("input age: ");
  scanf_s(" %d", &age, sizeof(age));

  printf("input gpa: ");
  scanf_s(" %f", &gpa, sizeof(gpa));

  printf("input grade: ");
  scanf_s(" %c", &grade, sizeof(grade));

  getchar();
  printf("input name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("\nage: %d\ngpa: %.2f\ngrade: %c\nname: %s", age, gpa, grade, name);

  return 0;
}
