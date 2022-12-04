#include <stdio.h>
#include <stdlib.h>

int sumOfUnique(int* nums, int numsSize) {
	int* found = (int*) malloc(sizeof(int) * 101);
	int i;
	for (i = 1; i <= 100; i++) {
		found[i] = -1;
	}

	for (i = 0; i < numsSize; i++) {
		found[nums[i]] = 1;
	}

	int sum = 0;
	for (i = 1; i <= 100; i++) {
		if (found[i] == 0) {
			sum += i;
		}
	}
	free(found);
	return sum;
}

int main() {
	int nlen = 4;
	int nums[4] = {1,2,3,2};
	printf("%d\n", sumOfUnique(nums, nlen));
}
