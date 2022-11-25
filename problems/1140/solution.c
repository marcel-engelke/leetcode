int play_round(int* piles, int piles_size, int m) {
	int max = 0;
	int stones = 0;
	for (int n = 1; n <= piles_size; n++) {
		// Take n stone piles
		for (int i = 0; i < n; i++) {
			stones += piles[i];
		}

		if (stones > max) {
			max = stones;
		}
		
	}
	return max;
}

int stoneGameII(int* piles, int piles_size){

} 
