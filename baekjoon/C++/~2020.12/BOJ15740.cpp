#include "iostream"
#include "string"
using namespace std;
#define AisBigger 2
#define BisBigger 3

int main() {
	string A, B, answer = "";
	int nextCarry = 0;
	int checkSign[3] = { 1, 1, 1 };
	//checkSign[0] = A�� ��ȣ, [1] = B�� ��ȣ, [2] = A, B �� �� ���ڻ����� �� ū �� ����

	cin >> A >> B;
	if (A[0] == '-') {
		checkSign[0] = -1;
		A = A.erase(0, 1);
	}
	if (B[0] == '-') {
		checkSign[1] = -1;
		B = B.erase(0, 1);
	}
	//A, B �ڸ��� ���߱�
	if (A.length() > B.length()) {
		while (A.length() > B.length()) {
			B.insert(0, "0");
		}
		checkSign[2] = AisBigger;
	}
	else if (A.length() < B.length()) {
		while (A.length() < B.length()) {
			A.insert(0, "0");
		}
		checkSign[2] = BisBigger;
	}
	if (checkSign[2] == 1 && checkSign[0] * checkSign[1] < 0) {
		for (int i = A.length() - 1; i >= 0; i--) {
			if ((A[i] - '0') > (B[i] - '0')) {
				checkSign[2] = AisBigger;
			}
			else if ((A[i] - '0') < (B[i] - '0')) {
				checkSign[2] = BisBigger;
			}
		}
	}
	for (int i = A.length() - 1; i >= 0; i--) {
		int currentCarry = nextCarry; //���� �ڸ������� �߻��� ĳ�� �������

		if (checkSign[0] * checkSign[1] < 0 && abs(currentCarry) < 9) {
			//���+���� ����� ���, ������ ���� �� ū �ʿ��� ĳ�� �̵��� �߻��ϴµ� �̸� ó��
			if (checkSign[2] == BisBigger && (A[i] - '0') > (B[i] - '0')) {
				currentCarry = 10 * checkSign[1];
			}
			else if (checkSign[2] == AisBigger && (A[i] - '0') < (B[i] - '0')) {
				currentCarry = 10 * checkSign[0];
			}
		}
		int digit = currentCarry 
					+ (A[i] - '0') * checkSign[0] 
					+ (B[i] - '0') * checkSign[1];
		if (abs(currentCarry) >= 9 && i > 0) {
			//ĳ�� �̵��� �߻��� ���, ���� �ڸ������� 1 �ٿ��� �Ѵ�.
			//���� ���� �ڸ����� 0�� ��� 
			//�� ���� �ڽ��� ���� �ڸ������� ĳ���� �޾ƿ� ���̹Ƿ� 9�� �����.
			if (checkSign[2] == BisBigger) {
				if (B[i - 1] == '0') {
					nextCarry = 9 * checkSign[1];
				}
				else {
					int carry = (B[i - 1] - '0') - 1;
					B[i - 1] = carry + '0';
					nextCarry = 0;
				}
			}
			else {
				if (A[i - 1] == '0') {
					nextCarry = 9 * checkSign[0];
				}
				else {
					int carry = (A[i - 1] - '0') - 1;
					A[i - 1] = carry + '0';
					nextCarry = 0;
				}
			}
		}
		else {
			nextCarry = abs(digit) >= 10? digit / 10 : 0;
		}
		answer.insert(0, to_string(digit % 10));
	}
	//������ �ڸ������� �߻��� ĳ���� ���� ��� �ڸ��� �߰�
	if (nextCarry != 0) {
		answer.insert(0, to_string(nextCarry));
	}
	//�ڸ����� ���߱� ���� �־��� 0�� ����
	while (answer[0] == '0' && answer.length() > 1) {
		answer.erase(0, 1);
	}
	for (int i = 1; i < answer.length(); i++) {
		if (answer[i] == '-') {
			answer.erase(i, 1);
		}
	}
	cout << answer;

	return 0;
}