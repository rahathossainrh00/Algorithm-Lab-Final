#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    if (s == reversed_s) {
        cout << s << " is a palindrome" << endl;
    } else {
        cout << s << " is not a palindrome" << endl;
    }
}
