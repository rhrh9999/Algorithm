#include <iostream>
#include <vector>
using namespace std;
/*
1. 요리시간t를 입력받음
2. 버튼클릭수를 구함
3. 버튼클릭수를 출력

*/
int main() {
    //1
    int t;
    cin >> t;

    //2
    vector <int> click(3); //0으로 초기화
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