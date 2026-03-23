#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int total = 0;
    while (n >= 10)
    {
        int spend = (n / 10) * 10;
        total += spend;
        int bonus = (n / 10);
        n = (n % 10) + bonus;
    }
    total += n;
    cout << total << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}