// printf
#include <stdio.h>

// malloc
#include <stdlib.h>

/*
cc -Wall -std=gnu11 -o ./pointer pointer.c && ./pointer | tee pointer.c.output.txt
*/

int main() {
  int *ptr = malloc(sizeof(int));
  printf("*ptr %d\n\n", *ptr);

  printf("ptr %p\n", ptr);
  printf("&ptr %p\n", &ptr);
  printf("&*ptr %p\n\n", &*ptr);

  printf("before increment %d\n", *ptr);
  *ptr = *ptr + 1;
  printf("after increment %d\n", *ptr);

  return 0;
}
