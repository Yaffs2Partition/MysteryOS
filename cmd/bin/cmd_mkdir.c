#include <stdio.h>
#include <sys/stat.h>
#include "../cmd.h"

void cmd_mkdir(int argc, char *argv[]) {
    if (argc < 2) { printf("mkdir: missing argument\n"); return; }
    if (mkdir(argv[1], 0755) != 0) perror("mkdir");
}

