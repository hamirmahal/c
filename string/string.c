#include <stdio.h>

// cc --std=c11 -o string string.c -Wall
int main (int argc, char* argv[]) {
    char* addressToMyString = "Hello, world!";
    fwrite(addressToMyString, sizeof(char), 500, stdout);
}
