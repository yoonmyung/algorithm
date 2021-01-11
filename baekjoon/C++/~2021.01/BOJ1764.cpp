#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, M, cnt = 0;
	map<string, int> map;
	string name;
	
	cin >> N >> M;
	for (int i = 0; i < N + M; i++) {
		cin >> name;
		if (map.find(name) != map.end()) {
			map[name]++;
		}
		else {
			map.insert(pair<string, int>(name, 0));
		}
	}
	for (auto it = map.begin(); it != map.end(); it++) {
		if (it->second > 0) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	//auto Ű����: �ڷ����� �� �� ���� �� �����ϰ� ��� ����
	//�躸�⿡ �ش�Ǵ� ���Ҹ� vector�� ��Ƽ� vector������� vector ��¸� �ϸ� ���� for���� �ʿ����.
	for (auto it = map.begin(); it != map.end(); it++) {
		if (it->second > 0) {
			cout << it->first << '\n';
		}
	}

	return 0;
}