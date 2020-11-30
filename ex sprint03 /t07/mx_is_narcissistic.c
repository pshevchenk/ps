#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
	int sum = 0;
	unsigned int size = 1;

	for (int n = num; n > 9; n /= 10) {
		size++;
	}

	for (int n = num; n > 0; n /= 10) {
		sum += (int) mx_pow(n % 10, size);
		if (sum > num) {
			return false;
		}
	}

	return sum == num;
}

/*
int main() {
	printf("%d", mx_is_narcissistic(153));
	printf("%d", mx_is_narcissistic(8208));
	printf("%d", mx_is_narcissistic(370));
	printf("%d", mx_is_narcissistic(371));
	printf("%d", mx_is_narcissistic(407));
	printf("%d", mx_is_narcissistic(0));
	printf("%d", mx_is_narcissistic(1));
	printf("%d", mx_is_narcissistic(2));
	printf("%d", mx_is_narcissistic(407));
	printf("%d\n", mx_is_narcissistic(548834));
	printf("%d", mx_is_narcissistic(25));
	printf("%d", mx_is_narcissistic(36));
	printf("%d", mx_is_narcissistic(16));
	printf("%d", mx_is_narcissistic(12));
	printf("%d", mx_is_narcissistic(144));
}
*/

