#include <iostream>
#include <vector>
using namespace std;
/*
1. ������ ���� �Է¹���
2. �Ž������� ���� ���� �ܵ��� �����.

*/
int main() {
    //1
    int pay;
    cin >> pay;

    //2
    int change = 1000 - pay;
    vector <int> cointype = { 500, 100, 50, 10, 5, 1 };
    int coin = 0; //��������
    for(int i=0; i<6; i++) {
        if (change==0) break;
        coin+=change / cointype[i];
        change=change% cointype[i];
    }
    cout << coin << '\n';

    return 0;
}