#include <stdio.h>
#include <string.h>
#include "../cmd.h"

void cmd_mynano(int argc, char *argv[]) {
    if (argc < 2) { printf("mynano: missing filename\n"); return; }
    FILE *f = fopen(argv[1], "a+");
    if (!f) { perror("mynano"); return; }
    printf("mynano: Editing %s (type ':q' to quit)\n", argv[1]);
    char line[512];
    while (1) {
        printf("> ");
        if (!fgets(line, sizeof(line), stdin)) break;
        line[strcspn(line, "\n")] = 0;
        if (strcmp(line, ":q") == 0) break;
        fprintf(f, "%s\n", line);
    }
    fclose(f);
}

