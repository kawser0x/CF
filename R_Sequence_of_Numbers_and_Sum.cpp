#include <bits/stdc++.h>
using namespace std;

void displayN(int n, int m)
{
    for (int i = m; i <= n; i++)
    {
        cout << i << " ";
    }
    int sumN = (n * (n + 1)) / 2;
    int sumM = ((m - 1) * m) / 2;
    cout << "sum =" << sumN - sumM << '\n';
}

void displayM(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        cout << i << " ";
    }
    int sumM = (m * (m + 1)) / 2;
    int sumN = ((n - 1) * n) / 2;
    cout <<"sum =" << sumM - sumN << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
        {
            break;
        }
        if (n > m)
        {
            displayN(n, m);
        }
        else
        {
            displayM(n, m);
        }
    }

    return 0;
}