#include "stdio.h"
#include "algorithm"
using namespace std;

// ������ ���� ������ �־ ��ü ���̵� �ø��� ����

//method 2 
//(�ݺ��� 1��, �迭 �Է¹����鼭 ���ÿ� �迭 �� �ּڰ� �����ϰ� ���ϱ�)
int main() {
	int N, M = 0, score, totalScore = 0;

	scanf_s("%d", &N);
	int temp = N;
	while (temp--) {
		scanf_s("%d", score);
		if (M < score)
			M = score;
		totalScore += score;
	}
	printf("%lf", (double)totalScore * 100 / M / N);
	//�ᱹ ��� ������ / M * 100�� �ϱ� ������, totalScore ���� 1���� ���൵ ������ ����� ���´�
	return 0;
}

/*
int main() {
	int N, temp;
	double M, totalScore = 0;
	double* subjects;

	scanf_s("%d", &N);
	temp = N;
	subjects = new double[N];
	while (temp > 0)
		scanf_s("%lf", &subjects[--temp]);
	temp = N;
	M = *max_element(subjects, subjects + N);
	while (temp--) {
		subjects[temp] = subjects[temp] / M * 100;
		totalScore += subjects[temp];
	}
	printf("%lf", totalScore / (double) N);
	return 0;
}
*/