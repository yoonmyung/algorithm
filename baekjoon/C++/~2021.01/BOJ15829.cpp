#include "iostream"
#include "cmath"
using namespace std;
#define M 1234567891
#define r 31

//������ Ȥ�� ������ ������ => "ū ��" �������� �� �� �� �����غ���!
//������ �ڸ����� �پ��� �����̱� ������, ��¼�� ū �� ������ �ƴ� �� ����

int main() {
	string input;
	int length;
	long long R = 1;
	long long hash = 0;

	cin >> length;
	cin >> input;
	for (int i = 0; i < length; i++) {
		hash = (hash + (input[i] - 96) * R) % M;
		R = R * r % M;
	}
	cout << hash;

	return 0;
}