#include<bits/stdc++.h>
using namespace std ;


/*
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cost_A = 4; 
    for (int i = 0; i <= n - 4; ++i) {
        int current_diff = 0;
        string target = "2026";
        for (int j = 0; j < 4; ++j) {
            if (s[i + j] != target[j]) {
                current_diff++;
            }
        }
        cost_A = min(cost_A, current_diff);
    }

    int cost_B = 0;
    for (int i = 0; i <= n - 4; ) {
        if (s.substr(i, 4) == "2025") {
            cost_B++;
            i += 4; 
        } else {
            i++;
        }
    }

    cout << min(cost_A, cost_B) << '\n';
}
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        // solve();
        // int n ;
        // cin >> n ;
        // string s ;
        // cin >> s ;
        // cout << ( (s.find("2026")+1) || !(s.find("2025")+1) ? 0 : 1 ) << endl;
    }
    return 0;
}