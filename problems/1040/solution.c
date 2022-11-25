#include <stdlib.h>
#include <math.h>

int min_val(int* arr, int arr_size) {
	int min = arr[0];
	for (int i = 1; i < arr_size; i++) {
		min = arr[i] < min ? arr[i] : min;
	}
	return min;
}

int max_val(int* arr, int arr_size) {
	int max = arr[0];
	for (int i = 1; i < arr_size; i++) {
		max = arr[i] > max ? arr[i] : max;
	}
	return max;
}

int* qsort(int* arr, int arr_size) {
	
}

/* -1 smallest
 *  0 no
 *  1 largest
 */
int is_endpoint_stone(int* stones, int stones_size, int stone) {
	int min = min_val(stones, stones_size);
	int max = max_val(stones, stones_size);
	return stone == min ? -1 : stone == max ? 1 : 0;
}

struct avail {
	int positions_size;
	int *positions;
};

struct avail* calc_available_moves(int* stones, int stones_size, int stone, int endpoint) {
	int other_ep = endpoint == -1 ? max_val(stones, stones_size) : min_val(stones, stones_size);
	int* fields = malloc((abs(endpoint - other_ep) - 1) * sizeof(int));
	if (endpoint == -1) {
		for (int i = 0; i < stones_size; i++) {
			
		}
	} else {
		
	}
	
	free(fields);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numMovesStonesII(int* stones, int stonesSize, int* returnSize){
	
}
