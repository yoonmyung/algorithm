/*
	��ü �����ָӴ� ������ �ּ��� ���� ������ �ѷ��� 5�� ��� Ȥ�� 3�� ����� ���̴�
	������ �ѷ� 15�� ����� �����ϸ�, 5�� ����� ���� ���� �ָӴ� ������ �� �ּҰ� �ǹǷ�
	�Է¹��� ������ �ѷ��� ���ؼ���
	1) 5�� ������� üũ -> 5�� ����� �ٷ� �ָӴ� ���� ���
	2) 5�� ����� �ƴϸ� 3kg ¥�� �ָӴ� ������ �ϳ� ������Ű��, ���� ���� �ѷ����� 3kg ����
	3-1) ���� ���� �ѷ��� 0�� �� ������ �� 1-2 ���� �ݺ�
	3-2) ���� ���� �ѷ��� 0���� ������ -1 ���
*/

//method 2
int N, Cnt;
int main()
{
	scanf("%d", &N);
	while (N % 5 && N >= 0)
		N -= 3, Cnt++;
	if (N < 0)
		printf("-1");
	else
		printf("%d", Cnt + (N / 5));
	return 0;
}

/*
#include <iostream>
using namespace std;
enum { smallSugar = 3 };
enum { bigSugar = 5 };

int main() {
	int totalAmountofSugar, totalCountofBag = -1, smallBag = 0, bigBag;

	cin >> totalAmountofSugar;
	while (smallSugar * smallBag <= totalAmountofSugar) {
		if ((totalAmountofSugar - smallSugar * smallBag) % bigSugar == 0) {
			bigBag =
				(totalAmountofSugar - smallSugar * smallBag) / bigSugar;
			if (totalCountofBag < 0 || totalCountofBag > smallBag + bigBag) {
				totalCountofBag = smallBag + bigBag;
			}
		}
		smallBag++;
	}
	cout << totalCountofBag;
	return 0;
}
*/