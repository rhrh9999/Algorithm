#include <iostream>
#include <vector>
using namespace std;
/*
1. �丮�ð�t�� �Է¹���
2. ��ưŬ������ ����
3. ��ưŬ������ ���

*/
int main() {
    //1
    int t;
    cin >> t;

    //2
    vector <int> click(3); //0���� �ʱ�ȭ
    vector <int> sec = { 300, 60,10 };

    for (int i = 0; i < 3; i++) {
        if (t == 0) break;
        click[i]=t / sec[i];
        t=t% sec[i];
    }

    if (t > 0) cout << "-1";
    else {
        for (int i = 0; i < 3; i++)
            cout << click[i] << ' ';
    }
    return 0;
}