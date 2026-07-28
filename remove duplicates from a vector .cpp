#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    vector<int> result;
    set<int> seen;
    for (int x : nums) {
        if (seen.find(x) == seen.end()) {
            result.push_back(x);
            seen.insert(x);
        }
    }
    for (int x : result) cout << x << " ";
    cout << endl;
}
