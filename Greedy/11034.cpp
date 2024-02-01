#include <iostream>
using namespace std;
/*
1. 캥거루의 초기 위치 abc를 받는다
2. 각 케이스별로 최대 움직임 횟수를 구한다.
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