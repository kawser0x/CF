#include<bits/stdc++.h>
using namespace std ;

void solve(){
    long long n ;
    cin >> n ;
    if(n < 2){
        cout << "NO" << "\n";
        return ;
    }
    bool is_prime = true ;
    for(int i=2; i*i <= n ; i++){
        if(n % i == 0){
            is_prime = false ;
            break;
        }
    }
    (is_prime) ? cout << "YES" << "\n" : cout << "NO" << "\n";
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