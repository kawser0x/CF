#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (!(cin >> t))
        return 0;

    for (int cN = 1; cN <= t; cN++)
    {
        int n;
        cin >> n;

        vector<long long> sticks(n);
        for (int i = 0; i < n; i++)
        {
            cin >> sticks[i];
        }
        sort(sticks.begin(), sticks.end());

        long long vT = 0;

        for (int k = n - 1; k >= 2; k--)
        {
            int l = 0;
            int r = k - 1;

            while (l < r)
            {
                if (sticks[l] + sticks[r] > sticks[k])
                {

                    vT += (r - l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }

        cout << "Case " << cN << ": " << vT << "\n";
    }
    return 0;
}