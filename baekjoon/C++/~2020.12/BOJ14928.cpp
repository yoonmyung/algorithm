#include "iostream"
#include "string"
using namespace std;
#define favorNum 20000303

//���� ���Ƽ� �����ؼ� ���� �ɸ� ����.....
int main() {
	string N;
	int part = 0;
	long long subN = 0;

	cin >> N;
	/*
	while (true) {
		if (subN < favorNum) {
			if (part == N.length()) {
				subN %= favorNum;
				break;
			}
			else {
				subN = subN * 10 + stoll(N.substr(part++, 1));
				continue;
			}
		}
		subN %= favorNum;
	}
	*/
	//solution 2 (���� �����ϰ� ���ư��� �ξ� �����ϰ� ǥ�� ����)
	for (int i = 0; i < N.length(); i++) {
		subN = (subN * 10 + (N[i] - '0')) % favorNum;
	}
	cout << subN;

	return 0;
}