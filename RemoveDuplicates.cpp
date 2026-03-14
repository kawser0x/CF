#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";

    for (int m : s)
    {
        cout << m << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}
