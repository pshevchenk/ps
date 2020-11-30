#include <stdbool.h>

int sqrt_floor(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	int i = 1;
	while (i * i <= n) {
		i++;
	}

	return i - 1;
}

bool mx_is_prime(int num) {
	if (num < 0 || num == 0 || num == 1) {
		return false; 
	}

	for(int i = 2; i <= sqrt_floor(num); i++) {
		if (num % i == 0) {
		return false;
		}
	}

	return true;
}

