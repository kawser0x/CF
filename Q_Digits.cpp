#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin >> n;
    string s = to_string(n);
    reverse(s.begin(),s.end());
    for(int i=0 ; i < s.length(); i++){
        cout << s[i] << " " ;
    }
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0 ;
}