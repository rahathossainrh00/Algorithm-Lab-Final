#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums = {10, 20, 30, 40};
    nums.insert(nums.begin() + 2, 25);
    nums.erase(nums.begin());
    for (int x : nums) cout << x << " ";
    cout << endl;
}
