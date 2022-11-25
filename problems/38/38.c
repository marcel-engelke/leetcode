#include <stdio.h>
#include <stdlib.h>

char* countAndSay(int n) {
}

char* gen(char* s, int slen) {
	char c;
	char* g = (char*) malloc(sizeof(char) * 128);
	int glen = 0;
	int j;
	for (int i = 0; i < slen;) {
		c = s[i];
		for (j = i+1; j < slen; j++) {
			if (s[i] != s[j]) {
				break;
			}
		}
		g[glen++] = i - j + '0';
		g[glen++] = c + '0';
		i = j;
	}
	free(s);
	g[glen] = '\0';
	return g;
}

int main() {
	char* s = (char*) malloc(sizeof(char) * 3);
	s[0] = '1';
	s[1] = '1';
	s[2] = '2';
	printf("%s\n", s);
	s = gen(s, 3);
	printf("%s\n", s);
}
