#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t_str = "" , other = "" ;
        for(char c : s){
            if(c == 'T'){
                t_str += c  ;
            }
            else 
                other += c ;
        }
        cout << t_str+other << '\n';
    }
    return 0;
}