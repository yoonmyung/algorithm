#include "stdio.h"

int main() {
	int hour, min, sec, cookingSec;

	scanf_s("%d %d %d", &hour, &min, &sec);
	scanf_s("%d", &cookingSec);
	sec += cookingSec;
	min += sec / 60;
	hour += min / 60;
	printf("%d %d %d", (hour >= 24 ? hour % 24 : hour), min % 60, sec % 60); 
	//hour�� �ٷ� hour%24 ����ص� ���� ��� ����

	return 0;
}