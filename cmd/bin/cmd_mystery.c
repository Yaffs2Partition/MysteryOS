#include <stdio.h>
#include "../cmd.h"

void cmd_mystery(int argc, char *argv[]) {
    (void)argc; (void)argv;
    printf("Hi there you found the easter egg\n");
    printf("Here’s a secret message just for you:\n");
    printf("“The true magic of MysteryOS is that YOU are building it.”\n");
}

