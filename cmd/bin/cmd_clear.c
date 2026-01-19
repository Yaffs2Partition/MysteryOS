#include <stdio.h>
#include "../cmd.h"

void cmd_clear(int argc, char *argv[]) {
    (void)argc; (void)argv;
    printf("\033[H\033[J");
}

