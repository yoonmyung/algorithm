#include "stdio.h"

int main() {
	int n1, n2, n12;

	scanf_s("%d %d %d", &n1, &n2, &n12);
	printf("%d", (int)((++n1) * (++n2) / (++n12) - 1));
	//���� ����ȯ �� �ص� ������ ��µǱ� ������ �˾Ƽ� �Ҽ��� ���ڸ��� ���� �ȴ�.

	return 0;
}