#include <iostream>
#include <vector>
using namespace std;
/*
1.원본 알파벳 수n 포스트잇개수m 입력받기
2. 포스트잇 애들 입력받기
3. 가능성 여부 판단
4. 출력하기
*/
int main() {
    //1
    int n, m;
    cin >> n >> m;
       
    //2
    string a, b;    
    cin >> a;

    
    while(m--) {
        int cnt = 0;
        cin >> b;       

        int start = 0; //j값 시작 조절하기
        for (int i = 0; i < n; i++) {
            for (int j = start; j < b.size(); j++) {
                if (a[i] == b[j]) {
                    cnt++;
                    //cout << "J: " << j << " post[j]: " << post[j] << '\n';
                    start = j + 1; //j값 조절 2
                    break;
                }
                if (cnt == n)break;
            }            
        }
  
        if (cnt == a.size()) cout << "true" << '\n';            
        else  cout << "false" << '\n';        
        
    }

    return 0;
}