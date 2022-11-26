#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* countAndSay(int n) {
	int pivot = 1;
	char* s1 = (char*) malloc(sizeof(char) * 4463);
	char* s2 = (char*) malloc(sizeof(char) * 4463);
	s1[0] = '1';
	s1[1] = '\0';
	int len = 1;
	int nchars;
	for (int i = 1; i < n; i++) {
		int newlen = 0;
		if (pivot == 1) {
			for (int j = 0; j < len; ) {
				int k;
				nchars = 1;
				for (k = j + 1; k < len; k++) {
					if (s1[j] != s1[k]) {
						break;
					}
					nchars++;
				}
				// TODO nchars >= 10
				s2[newlen++] = nchars + '0';
				s2[newlen++] = s1[j];
				s2[newlen] = '\0';
				j = k;
			}
			len = newlen;
			pivot *= -1;
		} else {
			for (int j = 0; j < len; ) {
				int k;
				nchars = 1;
				for (k = j + 1; k < len; k++) {
					if (s2[j] != s2[k]) {
						break;
					}
					nchars++;
				}
				// TODO nchars >= 10
				s1[newlen++] = nchars + '0';
				s1[newlen++] = s2[j];
				s1[newlen] = '\0';
				j = k;
			}
			len = newlen;
			pivot *= -1;
		}
	}

	return (pivot == 1) ? s1 : s2;
}

int main() {
	char* s = countAndSay(30);
	printf("%d\n", strlen(s));
} 
