#include <bits/stdc++.h>
using namespace std;
int main() {
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;
    string result = "";
    bool first = true;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        if (!first) result += " ";
        result += word;
        first = false;
    }
    cout << result << endl;
}
