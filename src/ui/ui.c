#include <stdio.h>
#include "ui.h"

void ui_init(void) {
    /* terminal backend only */
}

void ui_print(const char* text) {
    printf("%s", text);
}

void ui_input(char* buffer, int size) {
    if (!fgets(buffer, size, stdin))
        buffer[0] = 0;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '\n') {
            buffer[i] = 0;
            break;
        }
    }
}

void ui_clear(void) {
    printf("\033[2J\033[H");
}

