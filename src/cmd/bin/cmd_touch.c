#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../cmd.h"

void cmd_touch(int argc, char *argv[]) {
    if (argc < 2) { printf("touch: missing argument\n"); return; }
    int fd = open(argv[1], O_CREAT | O_WRONLY, 0644);
    if (fd < 0) perror("touch");
    else close(fd);
}

