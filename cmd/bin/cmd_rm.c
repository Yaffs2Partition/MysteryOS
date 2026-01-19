#include <stdio.h>
#include <unistd.h>
#include "../cmd.h"

void cmd_rm(int argc, char *argv[]) {
    if (argc < 2) { printf("rm: missing argument\n"); return; }
    if (unlink(argv[1]) != 0) perror("rm");
}

