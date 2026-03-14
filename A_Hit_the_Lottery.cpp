#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            cnt = n / 100;
            n = n - (100 * (n / 100));
        }
        // 1, 5, 10, 20,100
        else if (n >= 20 && n < 100)
        {
            cnt += n / 20;
            n = n - (20 * (n / 20));
        }
        else if (n >= 10 && n < 20)
        {
            cnt++;
            n = n - 10;
        }
        else if (n >= 5 && n < 10)
        {
            cnt++;
            n = n - 5;
        }
        else
        {
            cnt += n;
            n = 0 ;
        }
    }
    cout << cnt;
    return 0;
}