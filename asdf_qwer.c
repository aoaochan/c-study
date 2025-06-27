#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 1) printf("(argc: %d, argv: %s)\n", argc, argv[0]);
    printf("Hello, world!\n");
    return 0;
}
