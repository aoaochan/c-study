#include <stdio.h>

#define SUCCESS 0x1
#define FAILURE 0x2
#define PENDING 0x4
#define DELETED 0x8

int run(void) {
  // int status = SUCCESS | FAILURE | PENDING | DELETED;
  int status = SUCCESS;
  
  if (status & SUCCESS) printf("status is SUCCESS\n");
  if (status & FAILURE) printf("status is FAILURE\n");
  if (status & PENDING) printf("status is PENDING\n");
  if (status & DELETED) printf("status is DELETED\n");

  return 0;
}
