#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int  t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        string s ;
        cin >> s ;
        string temp = s ;
        sort(temp.begin(),temp.end());

        if(s == temp){
            cout << "YES" << '\n' ;
        }
        else 
            cout << "NO" << '\n' ;
    }
    return 0 ;
}