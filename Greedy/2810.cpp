#include <iostream>
using namespace std;
/*
1. �¼��� �Է¹ޱ�
2. �¼����� �Է¹ޱ�
3. ��Ȧ���� ���� �� �ִ� �ִ��� �� ���
*/

int main() {
    //1
    int n;
    cin >> n;
    
    //2
    string seat;
    cin >> seat;

    //3
    int cnts = 0, cntl = 0;
    for (int i = 0; i < seat.size(); i++) {
        if (seat[i] == 'S') cnts++;
        else cntl++;
    }

    cntl = cntl / 2; //Ŀ�ü� ������ �����ֱ�
    int cup = (cnts + cntl - 1) + 2;

    //4
    int people = seat.size();
    //cout << "people�� : " << people;
    if (cup <= people) cout << cup << '\n';
    else cout << people << '\n';
    
    return 0;
}