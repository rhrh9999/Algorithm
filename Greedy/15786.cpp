#include <iostream>
#include <vector>
using namespace std;
/*
1.���� ���ĺ� ��n ����Ʈ�հ���m �Է¹ޱ�
2. ����Ʈ�� �ֵ� �Է¹ޱ�
3. ���ɼ� ���� �Ǵ�
4. ����ϱ�
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

        int start = 0; //j�� ���� �����ϱ�
        for (int i = 0; i < n; i++) {
            for (int j = start; j < b.size(); j++) {
                if (a[i] == b[j]) {
                    cnt++;
                    //cout << "J: " << j << " post[j]: " << post[j] << '\n';
                    start = j + 1; //j�� ���� 2
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