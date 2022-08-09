#include <stdio.h>
#include <stdlib.h>

// for fork!
#include <unistd.h>

int main(int argc, char *argv[]) {
  fork();
  int x = 3;
  printf("location of code: %p\n", main);
  printf("location of heap: %p\n", malloc(1));
  printf("location of stack: %p\n", &x);
  return x;
}
