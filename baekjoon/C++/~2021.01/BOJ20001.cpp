#include "iostream"
#include "string"
#include "stack"
using namespace std;

int main() {
	stack<string> stack;
	int question = 0;

	while(true) {
		string input;
		
		getline(cin, input);
		//solution 2 (�� ������ �� �ʿ�� ����)
		if (input == "������ ����� ��") break;
		if (input == "����") question++;
		else if (input == "������") {
			if (question == 0) question += 2;
			else question--;
		}
		/*
		if (!input.compare("������ ����� ��")) {
			break;
		}
		else if (!input.compare("����")) {
			stack.push(input);
		}
		else if (!input.compare("������")) {
			if (stack.empty()) {
				stack.push("����");
				stack.push("����");
			}
			else {
				stack.pop();
			}
		}
		*/
	}
	 if (!question) /*if (stack.empty())*/ {
		cout << "�������� �����";
	}
	else {
		cout << "����";
	}

	return 0;
}