#include "stdio.h"
#include "time.h"

//printf, scanf�� �ӵ��� ������ �ֿ�����! 
//cin, cout�� �ӵ��� ������ ������ ��� �̰� ������ �ð� �ʰ��� �� �� ����

int main() {
//	clock_t startTime, endTime;
	int T, A, B;

	scanf_s("%d", &T);
	//	startTime = clock();
	while (T > 0) {
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
		T--;
	}
	//	endTime = clock();
//	printf("-------------%f", (double)(endTime - startTime));
	return 0;
}