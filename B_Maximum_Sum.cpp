#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + arr[i];
    }

    ll max_sum = 0;
    for (int i = 0; i <= k; i++) {
        int small_removed = 2 * i;
        int large_removed = k - i;
        ll current_sum = pref[n - large_removed] - pref[small_removed];
        
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}