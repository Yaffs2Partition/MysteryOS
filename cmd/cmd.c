#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cmd.h"


void execute_command(int argc, char *argv[]) {
    if (strcmp(argv[0], "help") == 0) cmd_help(argc, argv);
    else if (strcmp(argv[0], "clear") == 0) cmd_clear(argc, argv);
    else if (strcmp(argv[0], "echo") == 0) cmd_echo(argc, argv);
    else if (strcmp(argv[0], "ver") == 0) cmd_ver(argc, argv);
    else if (strcmp(argv[0], "grep") == 0) cmd_grep(argc, argv);
    else if (strcmp(argv[0], "ls") == 0) cmd_ls(argc, argv);
    else if (strcmp(argv[0], "cd") == 0) cmd_cd(argc, argv);
    else if (strcmp(argv[0], "mkdir") == 0) cmd_mkdir(argc, argv);
    else if (strcmp(argv[0], "touch") == 0) cmd_touch(argc, argv);
    else if (strcmp(argv[0], "file") == 0) cmd_file(argc, argv);
    else if (strcmp(argv[0], "find") == 0) cmd_find(argc, argv);
    else if (strcmp(argv[0], "rm") == 0) cmd_rm(argc, argv);
    else if (strcmp(argv[0], "cat") == 0) cmd_cat(argc, argv);
    else if (strcmp(argv[0], "mynano") == 0) cmd_mynano(argc, argv);
    else if (strcmp(argv[0], "mystery") == 0) cmd_mystery(argc, argv);
    else if (strcmp(argv[0], "exit") == 0) exit(0);
    else printf("Unknown command\n");
}

