#include<bits/stdc++.h>
using namespace std ;
void solve(){
    int n ;
    cin >> n ;
    vector<int> fre(n*n+1,0);
    int mx_fre = 0;
    for(int i=0; i<n*n;i++){
        int x ;
        cin >> x ;
        fre[x]++ ;
        mx_fre = max(mx_fre,fre[x]);
    }
    if(mx_fre <= n*n-n){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
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