#include <iostream>
using namespace std;
/*
1. Ļ�ŷ��� �ʱ� ��ġ abc�� �޴´�
2. �� ���̽����� �ִ� ������ Ƚ���� ���Ѵ�.
*/

int main() {
    //1
    int a, b, c;

    //2
    while (cin >> a >> b >> c) {
        cout << max(b - a, c - b) - 1 << '\n';
    }
    return 0;
}