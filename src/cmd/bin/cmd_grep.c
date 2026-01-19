#include <stdio.h>
#include <string.h>
#include "../cmd.h"

void cmd_grep(int argc, char *argv[]) {
    if (argc < 3) { printf("grep: missing arguments\n"); return; }
    char *pattern = argv[1];
    char *filename = argv[2];
    FILE *f = fopen(filename, "r");
    if (!f) { perror("grep"); return; }
    char line[512];
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, pattern)) printf("%s", line);
    }
    fclose(f);
}

