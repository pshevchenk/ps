#include <stdio.h>

int mx_strlen(const char *s) {
    int a;
    a = 0;
    
    if(s == NULL)
        return a;
    for(;s[a] != '\0';a++);
    return a;
}
