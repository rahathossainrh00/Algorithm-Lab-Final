#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : s) {
        if (vowels.find(c) != string::npos) count++;
    }
    cout << "Vowels: " << count << endl;
}
