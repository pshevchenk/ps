char *mx_strcpy(char *dst, const char *src) {
	int i = 0;
	while (src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return dst;
}
int main () {
    char str1[] = "kyky";
    char str2[] = "gogo";
    char str3[] = "hihi";
    printf("%s%s\n", str1, str2);
    mx_strcpy(str1,str2);
    printf("%s%s\n", str1, str2);
    mx_strcpy(str2,str3);
    printf("%s%s\n", str1, str2);
}
