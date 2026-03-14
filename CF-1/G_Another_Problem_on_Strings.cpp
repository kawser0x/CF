#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    if (!(cin >> k)) return 0;
    
    string s;
    cin >> s;

    long long ans = 0;
    int c_one = 0;
    
    vector<int> count(s.length() + 1, 0);
    
    count[0] = 1;

    for (char c : s) {
        if (c == '1') {
            c_one++;
        }
        
        if (c_one >= k) {
            ans += count[c_one - k];
        }
        
        count[c_one]++;
    }

    cout << ans << "\n";

    return 0;
}