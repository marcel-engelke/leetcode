#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize) {

	int* ans = (int*) malloc(sizeof(int) * numsSize);
	for (int i = 0; i < numsSize; i++) {
		ans[i] = nums[nums[i]];
	}
	*returnSize = numsSize;
	return ans;
}
