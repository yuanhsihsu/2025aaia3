/// week2-3.cpp 使用 C++ 2011 年新版的子函式 stoi() 的功能
/// 在 CodeBlocks 裡，必須選擇 Settings-Compiler... 把 C++11 打勾
#include <iostream>   /// cin cout 輸入輸出資料
#include <string>     /// string 字串的功能

using namespace std;   /// 使用標準命名空間 std

int main() {
    string a;   /// 宣告字串 a
    cin >> a;   /// 輸入字串 a

    string ans;   /// 宣告字串 ans 放置運算結果
    int N = a.length();   /// 取得 a 字串的長度
    for (int i = N-1; i >= 0; i--) {   /// 反向掃描字串
        ans += a[i];   /// 在迴圈裡，把 a[i] 加入 ans 字串的最後面
    }

    cout << a << "+" << stoi(ans) << "=";    /// 輸出字串結果
    cout << stoi(a) + stoi(ans) << endl;    /// stoi() 是 "string to int" 把「字串」轉為整數
}
