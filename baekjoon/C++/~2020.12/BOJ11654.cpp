#include "stdio.h"

int main() {
	char input;

	scanf_s("%c", &input);
	printf("%d", input);
	//���� �� ������ printf("%d", getchar()); �� �������� ��ü ����

	return 0;
}