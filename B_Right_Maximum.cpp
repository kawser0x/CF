#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 1;
    int maX = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= maX)
        {
            cnt++;
            maX = v[i];
        }
    }
    cout << cnt << "\n";
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