#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int i, j;
	int *sol = (int*) malloc(2 * sizeof(int));
	*returnSize = 2;
	for (i = 0; i <= numsSize - 2; i++) {
		for (j = i + 1; j <= numsSize - 1; j++) {
			if (nums[i] + nums[j] == target) {
				sol[0] = i;
				sol[1] = j;
				goto ret;
			}
		}
	}
	ret:
	return sol;
}

int *twoSum2(int *nums, int numsSize, int target, int* returnSize)
{
	int i, j;
	int *sol = (int*) malloc(2 * sizeof(int));
	*returnSize = 2;
	for (i = 0, j = numsSize - 1; i < j; ) {
		if (nums[i] + nums[j] == target) {
			sol[0] = i;
			sol[1] = j;
			break;
		} else if (nums [i] + nums[j] < target) {
			i++;
		} else {
			j--;
		}
	}
	return sol;
}

int main()
{
	int *retSize = (int*) malloc(sizeof(int));
	int* sol;
	int n1[4] = {2, 7, 11, 15};
	int n2[3] = {3, 2, 4};
	int n3[2] = {3, 3};
	sol = twoSum(n1, 4, 9, retSize);
	printf("[%d,%d]\n", sol[0], sol[1]);
	sol = twoSum(n2, 3, 6, retSize);
	printf("[%d,%d]\n", sol[0], sol[1]);
	sol = twoSum(n3, 2, 6, retSize);
	printf("[%d,%d]\n", sol[0], sol[1]);
	free(sol);
}
