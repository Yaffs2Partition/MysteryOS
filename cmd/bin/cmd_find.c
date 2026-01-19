#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include "../cmd.h"

void cmd_find(int argc, char *argv[]) {
    if (argc < 2) { printf("find: missing argument\n"); return; }
    DIR *d = opendir(".");
    if (!d) { perror("find"); return; }
    struct dirent *dir;
    while ((dir = readdir(d)) != NULL)
        if (strstr(dir->d_name, argv[1])) printf("%s\n", dir->d_name);
    closedir(d);
}

