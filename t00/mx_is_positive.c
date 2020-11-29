void mx_printstr (const char *s);

void mx_is_positive (int i) {
    if(i > 0)
        mx_printstr ("positive\n");
    if(i < 0)
        mx_printstr ("negative\n");
    if(i == 0)
        mx_printstr ("zero\n");
}

// int main() {
//     mx_is_positive(3);
//     mx_is_positive(0);
//     mx_is_positive(-2);
// }
