#include <string.h>
#include "kernel.h"
#include "../ui/ui.h"
#include "../cmd/cmd.h"

#define INPUT_MAX 256

void kernel_init(void) {
    ui_init();
    ui_print("================================\n");
    ui_print("      MysteryOS v0.1-alpha      \n");
    ui_print("================================\n");
}

void kernel_run(void) {
    char input[INPUT_MAX];

    while (1) {
        ui_print("Mystery> ");
        ui_input(input, INPUT_MAX);

        if (strcmp(input, "exit") == 0)
            break;

        cmd_execute(input);
    }
}

