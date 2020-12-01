#include <iostream>
#include "math.h"
#include "stdio.h"
using namespace std;

// std::string�� ȣȯ�Ǵ� ���� cin, cout / printf, scanf�� ȣȯ �� ��
// �ڷ��� �峭

//solution 1 (bbbbb)
/*
int main() {
	int input;
	scanf_s("%X", &input);
	printf("%d", input);
	return 0;
}
*/

//solution 2 ( switch() �κ��� ���� Ǯ������ �ƿ� �������� ����)
int main() {
	string input;
	int digit, numberOfDigit, changedNum = 0;

	cin >> input;
	digit = input.size() - 1;
	while (digit >= 0) {
		numberOfDigit =
			(input[digit] >= 'A' && input[digit] <= 'F' ?
				input[digit] - 'A' + 10 : input[digit] - '0');
		changedNum += numberOfDigit * pow(16, input.size() - digit - 1);
		digit--;
		/*
		switch (input.at(digit)) {
		case 'A':
			numberOfDigit = 10; break;
		case 'B':
			numberOfDigit = 11; break;
		case 'C':
			numberOfDigit = 12; break;
		case 'D':
			numberOfDigit = 13; break;
		case 'E':
			numberOfDigit = 14; break;
		case 'F':
			numberOfDigit = 15; break;
		default:
			numberOfDigit = input.at(digit) - '0'; break;
		}
		*/
	}
	cout << changedNum;
	return 0;
}