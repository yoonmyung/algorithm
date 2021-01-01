#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main() {
	int N, seperator = 0;
	string input, part;
	stack<string> stack;

	cin >> N;
	getchar();	//�������� �Է¹޴� ��� �߰��� �Է¹��۸� ��! ������ �ڵ尡 �ǵ���� �۵��Ѵ�.
	for (int i = 0; i < N; i++) {
		getline(cin, input);
		//solution 2 (stringstream �̿� - ���ڿ� ������ ����� ������ �� ���� ����!)
		stringstream ss(input);	
		//stringstream�� input �ֱ� 
		//(������ ���� ���������� �����ϴ� ���� �ƴ� �Ź� �̷������� ���� �����ؼ� �־���� ����� �۵��Ѵ�.
		//���������� ���� �� ���� ��� ss << input �̷��� ������ �ȴ�.
		while (true) {
			if (ss >> part) {	
				//stringstream���� ������� ���ڿ� �丷 ������ (���⸦ �������� �� �丷�� ������)
				//if���� true => stringstream���� �丷�� ���Դ�
				//if���� false => stringstream���� ���̻� ���� �丷�� ����
				stack.push(part);
			}
			else {
				break;
			}
		}
		cout << "Case #" << i + 1 << ":";
		while (!stack.empty()) {
			cout << " " << stack.top();
			stack.pop();
		}
		cout << '\n';

		/*
		while (seperator < input.length()) {
			part += input[seperator];
			if (seperator == input.length() - 1 || input[++seperator] == ' ') {
				stack.push(part);
				stack.push(" ");
				part.clear();
				seperator++;
			}
		}
		seperator = 0;
		cout << "Case #" << i + 1 << ":";
		while (!stack.empty()) {
			cout << stack.top();
			stack.pop();
		}
		cout << "\n";
		*/
	}

	return 0;
}