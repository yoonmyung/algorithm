/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, X;
	string inputOfElementsofA;

	cin >> N >> X;
	cin.ignore();
	getline(cin, inputOfElementsofA);
	int* intVersionofA = new int[inputOfElementsofA.length()];
	int startingPointofNumber = 0, endPointofNumber = 0, index = 0;
	while (endPointofNumber <= inputOfElementsofA.length()) {
		if ( endPointofNumber == inputOfElementsofA.length()
			|| inputOfElementsofA.at(endPointofNumber) == ' ') {
			intVersionofA[index++] =
				stoi(inputOfElementsofA
					.substr(startingPointofNumber,
						endPointofNumber - startingPointofNumber));
			startingPointofNumber = endPointofNumber + 1;
		}
		endPointofNumber++;	
	}
	for (int i = 0; i < index; i++) {
		if (intVersionofA[i] < X) {
			cout << intVersionofA[i] << " ";
		}
	}
	delete[] intVersionofA;
	return 0;
}
*/

//other method
#include <iostream>
using namespace std;

int n, x, k;
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;	
		// �迭 ���Ҹ� �����̽��ٷ� �����Ͽ� �Է¹޴� ���� "for�� + cin"�����ε� ����� ���� �ȴ�!!!
		if (x < k) cout << x << ' ';
	}
}