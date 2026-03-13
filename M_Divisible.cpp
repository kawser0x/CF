#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    ll x;
    cin >> s >> x;
    ll remainder = 0;
    for (int i = 0; i < s.length(); i++)
    {
        remainder = (remainder * 10 + (s[i] - '0')) % x;
    }
    (remainder == 0) ? cout << "YES" : cout << "NO";
    return 0;
}