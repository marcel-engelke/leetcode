#include <stdio.h>
#include <stdlib.h>

/*
int popPlayer(int *players, int plen, int x) {
	for (; x < (plen - 1); x++) {
		players[x] = players[x + 1];
	}
	return --plen;
}

int play(int* players, int n, int k) {
	int pn = 1;
	for (int i = k; i < 0; i--) {
		pn++;
		if (pn > n) {
			pn = 1;
		}
	}
	n = popPlayer(players, n, pn);
	if (n > 1) {
		play(players, n, k);
	}
	return players[0];
}

int findTheWinner(int n, int k) {
	int* players = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		players[i] = i + 1;
	}
	return play(players, n, k);
}

*/

int pop(int* r, int rlen, int pos) {
	for (; pos < rlen - 1; pos++) {
		r[pos] = r[pos + 1];
	}
	return --rlen;
}

int findTheWinner(int n, int k) {
	int* remain = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		remain[i] = i + 1;
	}
	int pos = 0;
	int round;
	while (n > 1) {
		for (round = k; round > 0; round--) {
			pos++;
			if (pos > n) {
				pos = 1;
			}
		}
		n = pop(remain, n, pos - 1);
		pos--;
	}
	return remain[0];
}

int main() {
	int n = 5;
	int k = 2;
	printf("%d\n", findTheWinner(n, k));
}
