#include <iostream>
#include <string>
using namespace std;
/*
1. 정수 a,b를 받는다.
2. 정수 중 5와 6을 찾는다.
3. 5와 6을 바꾼 a2, b2를 생성한다.
4. 두수의 합 중 최솟값과 최댓값을 찾는다
5. 4를 출력한다.
*/
int main() {
    //1
    string a, b;
    cin >> a >> b;

    //2-1 두 수의 합의 최댓값 구하기
    for (int i = 0; i < a.size(); i++) 
        if (a[i] == '5') a[i] = '6';
    for (int i = 0; i < b.size(); i++)
        if (b[i] == '5') b[i] = '6';
    int max = stoi(a) + stoi(b);  

    //2-2두 수의 합의 최솟값 구하기
    for (int i = 0; i < a.size(); i++)
        if (a[i] == '6') a[i] = '5';
    for (int i = 0; i < b.size(); i++)
        if (b[i] == '6') b[i] = '5';
    int min = stoi(a) + stoi(b);
    cout << min << ' ' << max;

    return 0;
}