#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s, d, c;
    getline(cin, s);
    cin >> d >> c;
    char tmp = s[0];
    tmp = tolower(tmp);
    string t;
    t.push_back(tmp);
    string t1 = R"(<li><a href="https://atcoder.jp/contests/abc)";
    string t2 = c + "/tasks/abc" + c + "_" + t + R"(">)";
    string t3 = s + "(diff:" + d + ")</a></li>";
    
    cout << t1 + t2 + t3 << endl;
    return 0;
}