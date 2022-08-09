// printf
#include <stdio.h>

// malloc
#include <stdlib.h>

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
