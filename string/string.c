#include <stdio.h>

int main (int argc, char* argv[]) {
    char* addressToMyString = "Hello, world!";
    fwrite(addressToMyString, sizeof(char), 500, stdout);
}
