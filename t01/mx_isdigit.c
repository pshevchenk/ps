#include <stdbool.h>
// #include <stdio.h>

bool mx_isdigit (int c) {
    if(c >= 48 && c <= 57) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

// int main() {
//     printf("%i", mx_isdigit('B'));
//     printf("%i", mx_isdigit('3'));
// }