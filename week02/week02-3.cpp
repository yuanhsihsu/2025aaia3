/// week2-3.cpp �ϥ� C++ 2011 �~�s�����l�禡 stoi() ���\��
/// �b CodeBlocks �̡A������� Settings-Compiler... �� C++11 ����
#include <iostream>   /// cin cout ��J��X���
#include <string>     /// string �r�ꪺ�\��

using namespace std;   /// �ϥμзǩR�W�Ŷ� std

int main() {
    string a;   /// �ŧi�r�� a
    cin >> a;   /// ��J�r�� a

    string ans;   /// �ŧi�r�� ans ��m�B�⵲�G
    int N = a.length();   /// ���o a �r�ꪺ����
    for (int i = N-1; i >= 0; i--) {   /// �ϦV���y�r��
        ans += a[i];   /// �b�j��̡A�� a[i] �[�J ans �r�ꪺ�̫᭱
    }

    cout << a << "+" << stoi(ans) << "=";    /// ��X�r�굲�G
    cout << stoi(a) + stoi(ans) << endl;    /// stoi() �O "string to int" ��u�r��v�ର���
}
