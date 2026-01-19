#include <stdio.h>
#include <unistd.h>
#include "../cmd.h"

void cmd_cd(int argc, char *argv[]) {
    if (argc < 2) { printf("cd: missing argument\n"); return; }
    if (chdir(argv[1]) != 0) perror("cd");
}

