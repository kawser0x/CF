#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    if (!(cin >> t))
        return;

    for (int caseNum = 1; caseNum <= t; ++caseNum)
    {
        int n;
        cin >> n;
        vector<long long> rungs(n + 1);

        for (int i = 1; i <= n; ++i)
        {
            cin >> rungs[i];
        }

        long long k = 0;

        for (int i = n; i >= 1; --i)
        {
            long long jump_distance = rungs[i] - rungs[i - 1];

            if (jump_distance > k)
            {
                k = jump_distance;
            }
            else if (jump_distance == k)
            {
                k++;
            }
        }

        cout << "Case " << caseNum << ": " << k << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}