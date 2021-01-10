#include "stdio.h"
#include <stack>
using namespace std;
#define washing 1
#define drying 2

int main() {
	int N, task, numberofDishes;
	stack<int> stack, washedStack, driedStack;

	scanf_s("%d", &N);
	for (int i = N; i > 0; i--) {
		stack.push(i);
	}
	while (true) {
		scanf_s("%d %d", &task, &numberofDishes);
		//washing dish �۾��� stack(wash, dry ���� ���� ���� ���õ�)�� �� ���� ���ÿ� ������
		if (!stack.empty() && task == washing) {
			for (int i = 0; i < numberofDishes; i++) {
				washedStack.push(stack.top());
				stack.pop();
			}
		}
		else {
			for (int i = 0; i < numberofDishes; i++) {
				driedStack.push(washedStack.top());
				washedStack.pop();
			}
		}
		//drying dish ������ ���� ���� ������ŭ �� ���� �� �������� ��찡 �ƴ� ���� ������
		//driedStack�� �� �� ������ while���� ���ƾ� ��
		if (washedStack.empty() && driedStack.size() == N) {
			break;
		}
	}
	while (!driedStack.empty()) {
		printf("%d\n", driedStack.top());
		driedStack.pop();
	}

	return 0;
}