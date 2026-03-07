#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s;
        int len = s.length();
        if(len <=10){
            cout << s << '\n';
        }
        else{
            cout << s[0] << len-2 << s[len-1] << '\n';
        }
    }
    return 0 ;
}