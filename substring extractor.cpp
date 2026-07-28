#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    getline(cin, name);
    size_t pos = name.find("@");
    if (pos == string::npos) {
        cout << "Invalid email" << endl;
        return 0;
    }
    string user_name = name.substr(0, pos);
    string domain_name = name.substr(pos + 1);
    cout << "Username: " << user_name << endl;
    cout << "Domain: " << domain_name << endl;
}
