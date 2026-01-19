#include <stdio.h>
#include "ui.h"

void ui_init() {
    // Clear screen and print header
    printf("================================\n");
    printf("        MysteryOS v0.2-alpha     \n");
    printf("================================\n");
}

void print_prompt() {
    printf("Mystery> ");
    fflush(stdout);
}

