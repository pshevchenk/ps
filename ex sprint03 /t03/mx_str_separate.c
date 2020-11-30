#include <stdbool.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
	bool nl = false;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == delim) {
			if (nl) { 
				i++;
				continue;
		       	}

			mx_printchar('\n');
			nl = true;
		} else {
			nl = false;
			mx_printchar(str[i]);
		}

		i++;
	}

	mx_printchar('\n');
}

