#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    auto x = arr[0] ^ arr[1] ^ arr[2];
    cout <<  x - arr[1]  << "\n";
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