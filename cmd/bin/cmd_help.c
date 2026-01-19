#include <stdio.h>
#include "../cmd.h"

void cmd_help(int argc, char *argv[]) {
    (void)argc; (void)argv;
    printf("Available commands:\n");
    printf(" help clear exit echo ver grep ls cd mkdir touch file find rm cat mynano\n");
}

