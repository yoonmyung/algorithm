#include <iostream>
using namespace std;

//�ݵ�� �迭�� ����ؾ� �ϳ�? ���ؿ� �������� �÷���

int main() {
	int N;
	long long* fibonacci;

	cin >> N;
	fibonacci = new long long[N + 1];
	fibonacci[0] = 0, fibonacci[1] = 1;
	for (int i = 2; i <= N; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	cout << fibonacci[N];
	delete[] fibonacci;
	return 0;
}

//method 2 (������ �̿��� ���, ���� ���� �����ϰ� ����)
/*
int main() {
	int N;
	long long Nth = 0, a = 0, b = 1;

	cin >> N;
	for (int i = 2; i <= N; i++) {
		Nth = a + b;
		a = b;
		b = Nth;
	}
	cout << Nth;
	return 0;
}
*/