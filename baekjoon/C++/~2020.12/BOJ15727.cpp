#include "stdio.h"
#define distancePerMin 5

int main() {
	int distance;

	scanf_s("%d", &distance);
	printf("%d", (distance % distancePerMin == 0) ? 
		distance / distancePerMin : distance / distancePerMin + 1);
	//"(distance + 4) / 5" Ȥ�� "distance / 5 + (distance % 5 != 0)" �� ��ü ���� 
	return 0;
}