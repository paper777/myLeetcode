#include <stdio.h>

int countDigitOne(int n) {
	int count = 0;
	long long i = 1;
	for(i=1; i <= n; i*=10) {
		int a = n / i;
		int b = n % i;
		count += (a + 8) / 10 * i + (a % 10 == 1) * (b + 1);
	}
	return count;
}

int main() {
	printf("%d: %d", 824883294, countDigitOne(824883294));
}
