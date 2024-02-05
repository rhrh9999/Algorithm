#include <iostream>
#include <vector>
using namespace std;
/*
1. 문제개수n 현정이의역량l 현정이가풀수있는최대개수k 를 입력받는다.
2. 문제 n개를 쉬운버전sub1과 어려운버전sub2를 입력받는다.
3. 각 문제를 현정이가 풀 수 있는지 확인한다.
4. 현정이가 얻을 수 있는 점수를 구한다. 
5. 점수의 최댓값을 출력한다.
*/

int main() {
    //1
    int n, l, k;
    cin >> n >> l >> k;
    
    //2
    vector <int> sub(200);
    int cnt = 0; //문제최대개수를 넘지 않도록 카운팅
    int score = 0;
    int max = 2 * n;

    //sub1은 홀수에, sub2는 짝수에 들어감
    for (int i = 0; i < max ; i=i+2) {
        cin >> sub[i] >> sub[i + 1];
    }

    //sub2 먼저 체크
    for(int i=1; i<max; i=i+2){       
        //k가 0인 경우 처리
        if (k == 0) break;

        //문제풀기 (어려운버전먼저)
        if (l >= sub[i]) {
            score += 140;
            cnt++;
            //cout << "sub2 성공 :" <<sub[i]<< '\n';
            //cout << "score: " << score << '\n';
            sub[i - 1] = 0; //sub1은 이미 맞춘것이므로 삭제처리
        }
        
        //문제최대개수 확인
        if (cnt >= k) break;
        
    }
    /*
    for (int i = 0; i < max; i = i + 2) {
        cout << sub[i] << " " << sub[i + 1] << '\n';
    }
    */
    //sub1 그다음 체크
    for (int i = 0; i < max ; i = i + 2) {

        //k가 0인 경우 처리
        if (k == 0) break;
        //문제풀기

        if (l >= sub[i] && sub[i]!=0) {           
            score += 100;
            cnt++;
            //cout << "sub1 성공; " << sub[i] << '\n';
            //cout << "score: " << score << '\n';
        }
        //문제최대개수 확인
        if (cnt >= k) break;
    }
    cout << score << '\n';

    return 0;
}