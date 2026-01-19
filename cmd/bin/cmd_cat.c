#include <stdio.h>
#include "../cmd.h"

void cmd_cat(int argc, char *argv[]) {
    if (argc < 2) { printf("cat: missing filename\n"); return; }
    FILE *f = fopen(argv[1], "r");
    if (!f) { perror("cat"); return; }
    char line[512];
    while (fgets(line, sizeof(line), f)) printf("%s", line);
    fclose(f);
}

