#include "stdio.h"
#include <algorithm>
using namespace std;

// set �ڷ����� ����ϸ� ���� ���̺귯�� �Լ��� ����� �ʿ䵵, 
// 42 ����� �̸� ������ �ʿ䵵 ����

//method 2
#include<set>
#include <iostream>
int main(){
	set<int> s;
	int x;
	for(int i =0; i<10; ++i)
		cin >> x, s.insert(x%42);
	cout << s.size();
}

/*
int main() {
	int countingRemainder = 0, number;
	int arrayofRemainder[42] = { 0, };

	for (int i = 1; i <= 10; i++) {
		scanf_s("%d", &number);
		arrayofRemainder[number % 42]++;
	}
	printf("%d", count_if(arrayofRemainder, arrayofRemainder + 42,
		[](int remainder) { return remainder > 0; }));
	return 0;
}
*/