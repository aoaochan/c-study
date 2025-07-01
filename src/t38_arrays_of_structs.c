#include <stdio.h>

typedef struct {
  char model[25];
  int year;
  int price;
} Car;

void printCar(Car car);

int run(void) {
  // printf("Hello, world! (from t38_arrays_of_structs.c)");

  Car cars[] = {
    { "Mustang", 2025, 32000 },
    { "Corvette", 2026, 68000 },
    { "Challenger", 2024, 29000 }
  };
  int lengthOfCars = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < lengthOfCars; i++) printCar(cars[i]);

  return 0;
}

void printCar(Car car) {
  printf("Model: %s, Year: %d, Price: $%d\n", car.model, car.year, car.price);
}
