#include <stdio.h>

int cmp_chars(char c1, char c2) {
	if (c1 == c2) return 0;
	else if (c1 > c2) return 1;
	else return -1;
}

int mx_strcmp(const char *s1, const char *s2) {
	int result = 0;
	int i = 0; 
	while (result == 0) {
		if (s1[i] == '\0') {
			if (s2[i] == '\0') {
				return 0;
			} else {
				return -1;
			}
		} else if (s2[i] == '\0') {
			return 1;	
		}

		result = cmp_chars(s1[i], s2[i]);
		i++;
	}

	return result;
}
// int main () {
//     printf ("%i\t%i\t%i\n", mx_strcmp ("A","A"), mx_strcmp ("a","A"), mx_strcmp ("A","a"));
//     printf ("%i\t%i\t%i\n", mx_strcmp ("F","F"), mx_strcmp ("f","F"), mx_strcmp ("aaA","aAAA"));
// }
