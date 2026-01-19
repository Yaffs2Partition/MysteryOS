#include <stdio.h>
#include "../cmd.h"

void cmd_clear(int argc, char *argv[]) {
    printf("\033[H\033[J"); // ANSI escape to clear terminal
}

