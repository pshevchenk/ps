#include<stdio.h>
#include<stdbool.h>


bool mx_si_odd(int value) {
    if (value % 2 == 0 && value != 0)
    {
        return 1;
    }
    else {
        return 0;
    }

}
