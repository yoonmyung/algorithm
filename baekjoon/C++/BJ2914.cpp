#include <cstdio>

int main() {
	int A, I;

	scanf_s("%d %d", &A, &I);
	I--;	// �ø��ϱ� �� I
	printf("%d", A * I + 1);	// "+ 1"�� �ø��ϴ� �Ͱ� ����
}