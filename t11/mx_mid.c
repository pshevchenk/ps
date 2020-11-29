int mx_mid(int a, int b, int c) {
    int mid;
    if (a > b && a < c) {
        mid = a;
    }
    if (b > a && b < c) {
        mid = b;
    }
    if (c > a && c < b) {
        mid = c;
    }
    return mid;
}
