// printf!
#include <stdio.h>

/*
cc -std=gnu11 -o ./checkWriteFileDescriptor checkWriteFileDescriptor.c
strace ./checkWriteFileDescriptor 2>&1 | tee output.txt
*/

int main() {
  perror("perror!\n");
  printf("printf!\n");
}