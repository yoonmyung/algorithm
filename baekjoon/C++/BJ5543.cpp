#include "stdio.h"
#include <algorithm>
using namespace std;

//ũ�� 5¥�� �迭 �ϳ��� ���ſ� ����� ���� ��� �Է¹��� ��
//min() �Լ��� �ɰ��� ���� �޾ƿ͵� ��

int main() {
	int burgers[3], beverages[2];

	for (int i = 0; i < 3; i++)
		scanf_s("%d", &burgers[i]);
	for (int i = 0; i < 2; i++)
		scanf_s("%d", &beverages[i]);
	printf("%d", 
		*(min_element(burgers, burgers + 3)) + *(min_element(beverages, beverages + 2)) - 50);
		//min_element �Լ��� ������(�ּҰ�)�� ������ ����
	return 0;
}

//method 2
/*
int a[5];
int main(){
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",min({a[0],a[1],a[2]}) + min(a[3],a[4]) - 50);
}
*/