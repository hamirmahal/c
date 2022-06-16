#include <stdio.h>

/*
cc -Wall --std=c11 -o string string.c
*/
int main (int argc, char* argv[]) {
    char* addressToMyString = "Hello, world!";
    fwrite(addressToMyString, sizeof(char), 500, stdout);
}
