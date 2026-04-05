#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (k == 0)
    {
        cout << 0 << "\n";
        return 0;
    }
    sort(v.rbegin(), v.rend());

    int cnt = 0;
    int sum = 0;

    for (int c : v)
    {
        if (sum >= k)
        {
            break;
        }
        else
        {
            sum += c;
            cnt++;
        }
    }

    (sum >= k) ? cout << cnt << "\n" : cout << -1 << "\n";

    return 0;
}