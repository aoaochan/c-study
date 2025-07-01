#include <stdio.h>

/*enum Day {
  Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, 
  Thursday = 5, Friday = 6, Saturday = 7
};*/

/*typedef enum {
  Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, 
  Thursday = 5, Friday = 6, Saturday = 7
} Day;*/

// enum Status {
typedef enum {
  Success, Failure, Pending
} Status;

void connectStatus(Status status);

int run(void) {
  // printf("Hello, world! (from t36_enums.c)")
  
  /*enum Day today = Sunday;
  printf("%d", today);*/

  /*Day today = Sunday;
  // if (today == Sunday || today == Saturday) printf("it's the weekend.");
  if (today == 1 || today == 7) printf("it's the weekend.");
  else printf("it's a weekday.");*/

  // enum Status status = Success;
  Status status = Success;

  connectStatus(status);

  return 0;
}

void connectStatus(Status status) {
  switch (status) {
    case Success:
      printf("Connection was successful\n");
      break;
    case Failure:
      printf("Could not connect\n");
      break;
    case Pending:
      printf("Connecting...\n");
      break;
  }
}
