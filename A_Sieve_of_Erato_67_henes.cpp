#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int tar = 67;
        bool is_posi = false ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == tar) is_posi = true;
        }
        
        (is_posi)? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
    return 0;
}