double mx_pow(double n, unsigned int pow) {
	if (pow == 0) {
		return 1;
	}

	double orig_val = n;

	unsigned int i;
	for (i = 0; i < pow - 1; i++) {
		n *= orig_val;
	}

	return n;
}

