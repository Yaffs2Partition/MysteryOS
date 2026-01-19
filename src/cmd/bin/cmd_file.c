#include <stdio.h>
#include <sys/stat.h>
#include "../cmd.h"

void cmd_file(int argc, char *argv[]) {
    if (argc < 2) { printf("file: missing argument\n"); return; }
    struct stat st;
    if (stat(argv[1], &st) != 0) { perror("file"); return; }
    if (S_ISDIR(st.st_mode)) printf("%s: directory\n", argv[1]);
    else if (S_ISREG(st.st_mode)) printf("%s: regular file\n", argv[1]);
    else printf("%s: unknown type\n", argv[1]);
}

