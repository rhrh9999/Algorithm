#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
1. ���츮 �� Ȱ���� ���� �Է¹޴´�.
2. ���츮�� ���̸� �Է¹޴´�. 
���� ���� �̿�
*/
int main() {
    //1
    int n;
    cin >> n;

    //2
    vector <int> hei(n);
    for (int i = 0; i < n; i++) {
        cin >> hei[i];
    }

    vector <int> win(n);
    for (int i = 0; i <= n-2; i++) {
        for (int j = i + 1; j <=n-1; j++) {
            if (hei[i] > hei[j]) {
                win[i]++;
            }
            else {                             
                break;
            }
        }
    }
    //�������� ����
    sort(win.rbegin(), win.rend());
    cout << win[0] << '\n';

    return 0;
}