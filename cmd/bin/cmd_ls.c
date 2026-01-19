#include <stdio.h>
#include <dirent.h>
#include "../cmd.h"

void cmd_ls(int argc, char *argv[]) {
    (void)argc; (void)argv;
    DIR *d = opendir(".");
    if (!d) { printf("Cannot open directory\n"); return; }
    struct dirent *dir;
    while ((dir = readdir(d)) != NULL)
        printf("%s  ", dir->d_name);
    printf("\n");
    closedir(d);
}

