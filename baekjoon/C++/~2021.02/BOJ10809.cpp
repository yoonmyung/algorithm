#include "stdio.h"

int main() {
	char S[100];
	int alphabet[26];
	// { 0, } �̰� 0���� �ʱ�ȭ �� ���� �۵��Ѵ�.

	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}
	scanf_s("%s", &S, 100);
	for (int i = 0; i < 100; i++) {
		if (S[i] < 97 || S[i] > 123) {
			break;
		}
		else if (alphabet[S[i] - 'a'] < 0) {
			alphabet[S[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	return 0;
}