#include "stdio.h"
#include "cmath"
using namespace std;

int main() {
	int a, b, L;
	double x, c; //��Ʈ���� ������ ������ �� �Ǽ��� ������ �޾ƾ� ��Ȯ�� ���� ���´�.

	scanf_s("%d %d %d", &L, &a, &b);
	c = sqrt(a * a + b * b); //����, ���� ������ ����ϴ� �밢���� ����
	x = L / c;	//a^2*x^2 + b^2*x^2 = c^2*x^2�� �ش��ϴ� x ���ϱ� (L = c * x �̹Ƿ�)
	printf("%d %d\n", (int)(a * x), (int)(b * x));

	return 0;
}
