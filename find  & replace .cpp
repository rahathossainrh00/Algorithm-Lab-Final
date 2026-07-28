#include <bits/stdc++.h>
using namespace std;
int main() {
    string sentence, find_word, replace_word;
    getline(cin, sentence);
    getline(cin, find_word);
    getline(cin, replace_word);
    size_t pos = sentence.find(find_word);
    if (pos != string::npos) {
        sentence.replace(pos, find_word.size(), replace_word);
        cout << sentence << endl;
    } else {
        cout << "Word not found" << endl;
    }
}
