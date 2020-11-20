#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    /*
    *   commands[n]�� n���� �Է��� �ǹ�, �� �Է�(command)�� ���ؼ� 3���� input�� ������
    *   <<command�� ����>>
    *   command [0] = i(���� ��°)
    *   command [1] = j(������ ��°)
    *   command [2] = k(���� �� ������ ��°)
    */
    vector<int> answer;
    vector<int> extractedArray;

    for (vector<int> command : commands) {
        for (int i = command[0] - 1; i < command[1]; i++)
            extractedArray.push_back(array[i]);
        sort(extractedArray.begin(), extractedArray.end());
        answer.push_back(extractedArray[command[2] - 1]);
        extractedArray.clear();
    }
    return answer;
}