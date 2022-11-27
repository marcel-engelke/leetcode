#include <math.h>
#include <stdio.h>

int maximum69Number (int num){
	int n = num;
	int pw;
	for (int i = 4; i >= 0; i--) {
		if (num < pow(10, i)) {
			continue;
		}
		pw = (int) pow(10, i);
		if (n / pw == 6) {
			num += 3 * pw;
			return num;
		}

		n %= pw;
	}
	return num;
}

int main() {
	printf("%d\n", maximum69Number(9999));
}
