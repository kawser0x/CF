#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long p, q;
    cin >> p >> q;

    long long alice = 3 * p;
    long long bob = 2 * q;

    if (alice >= bob && q > p)
    {
        cout << "Bob" << '\n';
    }
    else
    {
        cout << "Alice" << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}