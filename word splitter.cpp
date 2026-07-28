#include <bits/stdc++.h>
using namespace std;
int main() {
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    vector<string> sorted_words = words;
    sort(sorted_words.begin(), sorted_words.end());
    cout << "Sorted: ";
    for (string w : sorted_words) cout << w << " ";
    cout << endl;
    string longest = words[0];
    for (string w : words) {
        if (w.size() > longest.size()) longest = w;
    }
    cout << "Longest: " << longest << endl;
}
