#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    bool prime = true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    (isPrime(n)) ? cout << "YES \n" : cout << "NO \n";
    return 0;
}