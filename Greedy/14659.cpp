#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
1. 봉우리 겸 활잡이 수를 입력받는다.
2. 봉우리의 높이를 입력받는다. 
이중 포문 이용
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
    //내림차순 정리
    sort(win.rbegin(), win.rend());
    cout << win[0] << '\n';

    return 0;
}