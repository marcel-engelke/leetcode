#include <stdio.h>
#include <string.h>

int subsq(char *s, char *t, int i, int j, int sLen, int tLen)
{
	int n = 0;
	for ( ; i < sLen; i++) {
		if (s[i] == t[j]) {
			if (j == tLen - 1) {
				n++;
			} else {
				n += subsq(s, t, i + 1, j + 1, sLen, tLen);
			}
		}
	}
	return n;
}

char *trim(char *s, int sLen, char tFirst, char tLast)
{
	int i;
	for (i = sLen - 1; i >= 0; i--, sLen--) {
		if (s[i] == tLast) {
			break;
		}
	}
	for (i = 0; i < sLen; i++, sLen--) {
		if (s[i] == tFirst) {
			break;
		}
	}
	return s + i;
}

int numDistinct(char *s, char *t)
{
	int sLen = strlen(s);
	int tLen = strlen(t);
	//s = trim(s, sLen, t[0], t[tLen - 1]);
	return subsq(s, t, 0, 0, sLen, tLen);
}

int main()
{
	char *s = "adbdadeecadeadeccaeaabdabdbcdabddddabcaaadbabaaedeeddeaeebcdeabcaaaeeaeeabcddcebddebeebedaecccbdcbcedbdaeaedcdebeecdaaedaacadbdccabddaddacdddaaaa";
	char *t = "bcddceeeebecbc";
	printf("%d\n", numDistinct(s, t));
}
