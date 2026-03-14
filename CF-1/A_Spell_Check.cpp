#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ; cin >> n ;
    string s ;
    cin >> s ;
    string tar = "Timur";
    sort(tar.begin(), tar.end());
    sort(s.begin(), s.end());
    if(s == tar){
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    
}

int main(){
    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0 ;
}