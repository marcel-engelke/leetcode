#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize){
	int* dcd = malloc(sizeof(int) * (encodedSize + 1));
	dcd[0] = first;
	for (int i = 0; i < encodedSize; i++) {
		dcd[i + 1] = encoded[i] ^ dcd[i];
	}
	*returnSize = encodedSize + 1;
	return dcd;
}
