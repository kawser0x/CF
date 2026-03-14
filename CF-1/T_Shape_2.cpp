#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int space = n - 1;
    int star = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < star; k++)
        {
            cout << "*";
        }
        space--;
        star+=2 ;

        (i < n - 1) ? cout << '\n' : cout << "";
    }
    return 0;
}