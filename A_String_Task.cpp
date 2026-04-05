#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    string sc ;
    for (int i = 0; i < s.size(); i++)
    {
        char sh = tolower(s[i]);
        if (!(sh == 'a' || sh == 'e' || sh == 'i' || sh == 'o' || sh == 'u' || sh == 'y'))
        {
            sc.push_back(sh);
        }
    }
    for(int i=0; i<sc.size();i++){
        cout << "."<<sc[i] ;
    }
    return 0;
}