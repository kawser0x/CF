#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string ch = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            ch += s[i];
        }
    }
    for (int i = 0; i < ch.size(); i++)
    {
        (i < ch.size() - 1) ? cout << ch[i] << '+' : cout << ch[i];
    }
    cout << '\n';
    return 0;
}