#include "stdio.h"
#include <time.h>

//�������׳׽��� ü - �Ҽ� ���ϱ�
//����� �����ϴ� ��

int main() {
	clock_t startTime, endTime;
	int M, N;
	int* numbers;

	scanf_s("%d %d", &M, &N);
	numbers = new int[N + 1];
	for (int i = 0; i <= N; i++)
		numbers[i] = 0;
	startTime = clock();
	if (M == 1)
		M++;
	for (int i = 2; i <= N; i++) {
		if (numbers[i] == 1)	//�̹� �Ҽ� ��󿡼� ���ܵ� �������� "���"
			continue;
		for (int j = i * 2; j <= N; j += i) {
			numbers[j] = 1;	//��� �Ÿ���
		}
	}
	for (int i = M; i <= N; i++) {
		if (numbers[i] == 0)
			printf("%d\n", i);
	}
	endTime = clock();
	printf("-------------%f", (double)(endTime - startTime));
	delete[] numbers;
	return 0;
}