#include <string.h>
#include "cmd.h"
#include "../ui/ui.h"

void cmd_execute(const char* input) {
    if (strcmp(input, "help") == 0) {
        ui_print("Available commands:\n");
        ui_print(" help\n clear\n exit\n");
    }
    else if (strcmp(input, "clear") == 0) {
        ui_clear();
    }
    else if (input[0] != 0) {
        ui_print("Unknown command\n");
    }
}

