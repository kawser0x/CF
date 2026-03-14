#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    char ch ;
    cin >> n >> ch ;

    for(int i=0; i<n; i++){
        cout << ch << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while (t--)
    {
        solve();
    }
    
    return 0 ;
}