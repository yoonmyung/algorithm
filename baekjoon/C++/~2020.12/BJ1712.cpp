#include <iostream>
#include <time.h>
using namespace std;

//�ð��ʰ��� ���ٴ� ���� �� �Ŀ� �ð������� �ɶ�� ���� �ƴϴ�. ������ �ٲٶ�� ��
//�ݺ����� �ð� �ʰ��� ��� -> 1. ��ø �ݺ��� ������ ���δ� 2. �ݺ��� ������ �ƴ� ������ �����̴�
int main() {
	long long A, B, C;

	cin >> A >> B >> C;
	if (B >= C) {
		//B >= C�̸� �Ʒ� �ε���� ��� ������ �� ����.
		cout << -1;
	}
	else {
		/*
			C * ���ͺб��� > A + B * ���ͺб��� �� �Ǵ� ���ͺб����� ã�� ��
			�̰� �ݺ������� ������ �Ѿ��� ���ư�
			�ݺ����� �ƴ� ���������� Ǯ�� ��
			C * ���ͺб��� = A + B * ���ͺб��� "+ 1" (�����̹Ƿ� ������ �ڿ����̴�)
			�� ���ͺб����� ã���� �ȴ�.
		*/
		cout << A / (C - B) + 1;
	}
	/*
	long long A, B, C, breakEventPoint = 1;
	clock_t startTime, endTime;

	cin >> A >> B >> C;
	while (C * breakEventPoint < A + B * breakEventPoint) {
		endTime = clock();
		if (endTime - startTime >= 345) {
			breakEventPoint = -2;
			break;
		}
		breakEventPoint++;
	}
	cout << breakEventPoint + 1;
	*/
	return 0;
}