#include "stdio.h"

int main() {
	int N, result = 1;

	scanf_s("%d", &N);
	while (N > 1) {	// => while (N--) 9��° �� ���� ����
		result *= N;
		N--;
	}
	printf("%d", result);
	return 0;
}


// method 2 (���ȣ�� �̿�) �ٸ� �ð��ʰ��� ������
/*
int factorial(int N) {
	if (N == 1)
		return 1;
	return	N * factorial(N - 1);
}

int main() {
	int N, result = 1;

	scanf_s("%d", &N);
	printf("%d", factorial(N));
	return 0;
}
*/