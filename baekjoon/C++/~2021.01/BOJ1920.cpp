#include "stdio.h"
#include "algorithm"
using namespace std;

//���� ã�� => ����Ž��X ���� Ž������ �����ϱ�!!
//binary_search(�迭 �����ּ�, �迭 ������ �ּ�, ã�� ��) #include <algorithm>���� ��� ����.

long long* Numbers;

void binarySearch(int start, int end, long long input) {
	int mid = (start + end) / 2;

	if (end < start) {
		printf("0\n");
		return;
	}
	if (Numbers[mid] == input) {
		printf("1\n");
		return;
	}
	else if (Numbers[mid] > input) {
		binarySearch(start, mid - 1, input);
	}
	else {
		binarySearch(mid + 1, end, input);
	}
}

int main() {
	int N, M;
	long long input;

	scanf_s("%d", &N);
	Numbers = new long long[N];
	for (int i = 0; i < N; i++) {
		scanf_s("%lld", &Numbers[i]);
	}
	sort(Numbers, Numbers + N);
	scanf_s("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf_s("%lld", &input);
		binarySearch(0, N - 1, input);
	}

	return 0;
}