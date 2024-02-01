#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
1.�������� �Է¹���
2.�̵������ �Է¹޴´�
3.�ּ� �̵������ ���Ѵ�
4.�ּ� �̵������ ����Ѵ�
*/

int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <int> move(n);
    for (int i = 0; i < n; i++) {
        cin >> move[i];
    }

    //3
    sort(move.begin(), move.end());
    
    //4
    int sum = 0;
    for (int j = 0; j < n - 1; j++) {
        sum += move[j];
    }
    cout << sum << '\n';

    return 0;
}