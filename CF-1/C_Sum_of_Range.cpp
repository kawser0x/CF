#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int l, int r)
{
    ll sum = 0;
    ll sumE = 0;
    ll sumO = 0;
    for (int i = l; i <= r; i++)
    {
        sum += i;
        if (i % 2 == 0)
            sumE += i;
        if (i % 2 != 0)
            sumO += i;
    }

    cout << sum << "\n"
         << sumE << "\n"
         << sumO;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l, r;
    cin >> l >> r;
    if (l > r)
        solve(r, l);
    else
        solve(l, r);

    return 0;
}