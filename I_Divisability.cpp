#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll x, ll k)
{
    ll n = x / k;
    if (n <= 0)
        return 0;
    ll y = (n * (n + 1)) / 2;
    return (k * y);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll l, r, k;
    cin >> l >> r >> k;
    if (l > r)
    {
        swap(l, r);
    }
    cout << sum(r, k) - sum(l - 1, k);
    return 0;
}