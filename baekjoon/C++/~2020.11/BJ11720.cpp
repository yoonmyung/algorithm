#include <iostream>
#include <cmath>
using namespace std;

//(����) int�� 9�ڸ�, long�� 18�ڸ� ���� ǥ���� �����ϴ�
//�ڸ����� �ʹ� ū ��� �䱸 => ���ڿ� �̿�!!!

int main() {
	char* wholeNumber;
	int count = 1, sum = 0, index = 0;

	cin >> count;
	wholeNumber = new char[count];
	cin	>> wholeNumber;
	while (index < count)
		sum += (int)(wholeNumber[index++] - '0');	
					//char���� �� �ڸ����� int�� �� �ڸ����� �ٲٰ� ���� �� ���
	cout << sum;
	return 0;
}

/*
* //method 2
	int n, x, s = 0;
	scanf("%d", &n);
	for (; n--;) {
		scanf("%1d", &x);	//1�ڸ����� ������ �Է¹޾Ƽ� �ٷ� ���ϱ� ���
		s += x;
	}
	printf("%d", s);
*/