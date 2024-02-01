#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
1.마을수를 입력받음
2.이동비용을 입력받는다
3.최소 이동비용을 구한다
4.최소 이동비용을 출력한다
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