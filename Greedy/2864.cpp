#include <iostream>
#include <string>
using namespace std;
/*
1. ���� a,b�� �޴´�.
2. ���� �� 5�� 6�� ã�´�.
3. 5�� 6�� �ٲ� a2, b2�� �����Ѵ�.
4. �μ��� �� �� �ּڰ��� �ִ��� ã�´�
5. 4�� ����Ѵ�.
*/
int main() {
    //1
    string a, b;
    cin >> a >> b;

    //2-1 �� ���� ���� �ִ� ���ϱ�
    for (int i = 0; i < a.size(); i++) 
        if (a[i] == '5') a[i] = '6';
    for (int i = 0; i < b.size(); i++)
        if (b[i] == '5') b[i] = '6';
    int max = stoi(a) + stoi(b);  

    //2-2�� ���� ���� �ּڰ� ���ϱ�
    for (int i = 0; i < a.size(); i++)
        if (a[i] == '6') a[i] = '5';
    for (int i = 0; i < b.size(); i++)
        if (b[i] == '6') b[i] = '5';
    int min = stoi(a) + stoi(b);
    cout << min << ' ' << max;

    return 0;
}