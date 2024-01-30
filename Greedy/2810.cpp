#include <iostream>
using namespace std;
/*
1. 좌석수 입력받기
2. 좌석정보 입력받기
3. 컵홀더에 놓을 수 있는 최대사람 수 출력
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

    cntl = cntl / 2; //커플석 반으로 나눠주기
    int cup = (cnts + cntl - 1) + 2;

    //4
    int people = seat.size();
    //cout << "people수 : " << people;
    if (cup <= people) cout << cup << '\n';
    else cout << people << '\n';
    
    return 0;
}