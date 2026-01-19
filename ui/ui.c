#include <stdio.h>
#include "ui.h"

void ui_init() {
    printf("================================\n");
    printf("        MysteryOS v0.3-alpha    \n");
    printf("================================\n");
}

void print_prompt() {
    printf("Mystery> ");
    fflush(stdout);
}
