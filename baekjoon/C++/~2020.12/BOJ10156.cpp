#include "stdio.h"

int main() {
	int K, N, M;

	scanf_s("%d %d %d", &K, &N, &M);
	printf("%d", (K * N - M > 0 ? K * N - M : 0));

	return 0;
}