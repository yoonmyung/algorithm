#include <iostream>
using namespace std;

//long long ���� �ʰ� ��� �����ϰ� ������
//C++�� Big integer �ذ� �����?

int main() {
	long long n, m;
	long long rest = 0;

	cin >> n >> m;
	rest += (n / m) % 10 * m + n % m;
	n -= rest;
	cout << n / m << "\n" << rest;
	return 0;
}