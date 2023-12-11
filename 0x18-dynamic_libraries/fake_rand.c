#define _GNU_SOURCE
#include <dlfcn.h>

int rand(void) {
    return 9;  /* Replace with the winning number you want to force */
}
