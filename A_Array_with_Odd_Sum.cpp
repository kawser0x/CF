#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    bool is_odd = false , is_even = false ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] % 2 ==0){
            is_even = true ;
        }
        if(arr[i] % 2 != 0){
            is_odd = true ;
        }
    }
    (sum % 2 != 0 || (is_odd && is_even)) ? cout << "YES" : cout << "NO";
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
        cout << '\n';
    }
    return 0;
}