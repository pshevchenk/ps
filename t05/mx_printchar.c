#include <unistd.h>

void mx_printchar(char n) {
    write (1, &n, 1);
}
