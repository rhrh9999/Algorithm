#include <iostream>
#include <vector>
using namespace std;
/*
1. ��������n �������ǿ���l �����̰�Ǯ���ִ��ִ밳��k �� �Է¹޴´�.
2. ���� n���� �������sub1�� ��������sub2�� �Է¹޴´�.
3. �� ������ �����̰� Ǯ �� �ִ��� Ȯ���Ѵ�.
4. �����̰� ���� �� �ִ� ������ ���Ѵ�. 
5. ������ �ִ��� ����Ѵ�.
*/

int main() {
    //1
    int n, l, k;
    cin >> n >> l >> k;
    
    //2
    vector <int> sub(200);
    int cnt = 0; //�����ִ밳���� ���� �ʵ��� ī����
    int score = 0;
    int max = 2 * n;

    //sub1�� Ȧ����, sub2�� ¦���� ��
    for (int i = 0; i < max ; i=i+2) {
        cin >> sub[i] >> sub[i + 1];
    }

    //sub2 ���� üũ
    for(int i=1; i<max; i=i+2){       
        //k�� 0�� ��� ó��
        if (k == 0) break;

        //����Ǯ�� (������������)
        if (l >= sub[i]) {
            score += 140;
            cnt++;
            //cout << "sub2 ���� :" <<sub[i]<< '\n';
            //cout << "score: " << score << '\n';
            sub[i - 1] = 0; //sub1�� �̹� ������̹Ƿ� ����ó��
        }
        
        //�����ִ밳�� Ȯ��
        if (cnt >= k) break;
        
    }
    /*
    for (int i = 0; i < max; i = i + 2) {
        cout << sub[i] << " " << sub[i + 1] << '\n';
    }
    */
    //sub1 �״��� üũ
    for (int i = 0; i < max ; i = i + 2) {

        //k�� 0�� ��� ó��
        if (k == 0) break;
        //����Ǯ��

        if (l >= sub[i] && sub[i]!=0) {           
            score += 100;
            cnt++;
            //cout << "sub1 ����; " << sub[i] << '\n';
            //cout << "score: " << score << '\n';
        }
        //�����ִ밳�� Ȯ��
        if (cnt >= k) break;
    }
    cout << score << '\n';

    return 0;
}