#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
} Student;

void printStudent(Student student);

int run(void) {
  // printf("Hello, world! (from t37_structs.c)");

  /*Student student1 = { "Spongebob", 30, 2.5, true };
  Student student2 = { "Patrick", 36, 1.0, false };
  Student student3 = { "Squidward", 48, 3.2, false };

  printf("%s %d %.1f %s\n", student1.name, student1.age, student1.gpa, student1.isFullTime ? "True" : "False");
  printf("%s %d %.1f %s\n", student2.name, student2.age, student2.gpa, student2.isFullTime ? "True" : "False");
  printf("%s %d %.1f %s\n", student3.name, student3.age, student3.gpa, student3.isFullTime ? "True" : "False");*/

  Student s = {0};

  printf("Before: ");
  printStudent(s);

  strcpy(s.name, "aoaochan");
  s.age = 1024;
  s.gpa = 4.0;
  s.isFullTime = true;

  printf("After: ");
  printStudent(s);

  return 0;
}

void printStudent(Student student) {
  printf("Name: %s, Age: %d, GPA: %.1f, isFullTime: %s\n", student.name, student.age, student.gpa, student.isFullTime ? "Yes" : "No");
}
