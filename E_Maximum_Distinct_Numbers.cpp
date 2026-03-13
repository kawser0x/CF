#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll sum = 0;
    ll i = 1;
    while (1)
    {
        sum = (i * i + i) / 2;
        if (sum > n)
        {
            i--;
            break;
        }
        i++;
    }
    cout << i;

    return 0;
}