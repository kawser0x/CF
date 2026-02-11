#include<bits/stdc++.h>
using namespace std ;

long long getSumOfDigits(long long n) {
    long long sum = 0;
    string s = to_string(n);
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}

void solve() {
    long long x;
    cin >> x;

    if (x % 9 != 0) {
        cout << 0 << '\n';
        return;
    }

    int count = 0;
    for (long long y = x; y <= x + 100; y++) {
        if (y - getSumOfDigits(y) == x) {
            count++;
        }
    }
    
    cout << count << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0 ;
}