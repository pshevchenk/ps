#include <stdbool.h>
#include <stdio.h>

bool mx_isspace (char c) {
    if ((c == 32) || (c >= 9 && c <= 13)) {
        return 1;
    }
    else {
        return 0;
    }
}

//int main(int argc, char *argv[]) {
//	printf("%d", mx_isspace('a'));
//}
