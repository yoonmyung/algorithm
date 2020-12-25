#include "iostream"
#include "string"
using namespace std;

int main() {
	string binary, copiedBinary;
	int carry = 0;

	cin >> binary;
	copiedBinary = binary.substr(0);
	copiedBinary.insert(0, "0000");	// 1 * 2����, �ڸ����� ���߱� ���� ���ʿ��� 0 �߰�
	binary.insert(binary.length(), "0000");	// 16 * 2������ ����� ��
	//1*2���� + 16*2���� �ϴ� ����
	for (int i = binary.length() - 1; i >= 0; i--) {
		int sum = (binary[i] - '0') + (copiedBinary[i] - '0') + carry;
		if (sum >= 2) {
			sum -= 2;
			carry = 1;
		}
		else {
			carry = 0;
		}
		binary[i] = sum + '0';
	}
	if (carry > 0) {
		binary.insert(0, "1");
	}
	cout << binary;

	return 0;
}