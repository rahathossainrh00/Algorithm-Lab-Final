#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    sort(scores.rbegin(), scores.rend());
    int sum = 0;
    for (int s : scores) sum += s;
    double average = (double) sum / scores.size();
    cout << "Sorted scores: ";
    for (int s : scores) cout << s << " ";
    cout << "\nAverage: " << average << endl;
    cout << "Topper scored: " << scores.front() << endl;
}
