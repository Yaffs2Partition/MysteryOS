#include <stdio.h>
#include <string.h>
#include "kernel/kernel.h"
#include "ui/ui.h"
#include "cmd/cmd.h"

#define MAX_INPUT 128
#define MAX_ARGS 16

int main() {
    char input[MAX_INPUT];
    char *argv[MAX_ARGS];
    int argc;

    kernel_init();
    ui_init();

    while (1) {
        print_prompt();

        if (!fgets(input, sizeof(input), stdin))
            break;

        input[strcspn(input, "\n")] = 0; // remove newline

        if (strlen(input) == 0)
            continue;

        // parse input
        argc = 0;
        char *token = strtok(input, " ");
        while (token != NULL && argc < MAX_ARGS) {
            argv[argc++] = token;
            token = strtok(NULL, " ");
        }

        execute_command(argc, argv);
    }

    return 0;
}

