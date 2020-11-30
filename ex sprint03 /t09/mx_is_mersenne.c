#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int n);
	
bool mx_is_mersenne(int n) {
	for (int i = 1; i < n; i++) {
		int test = mx_pow(2, i) - 1;
		if (test > n) {
			return false;
		}

		if (test == n) {
			return (mx_is_prime(test));
		}
	}

	return false;
}

