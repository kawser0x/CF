#include<bits/stdc++.h>
using namespace std ;

#define ll long long

void solve(){
    ll l , r ;
    cin >> l >> r ;
    if(l < r){
        ll preSum = ((l-1)*l)/2 ;
        ll sufSum = (r*(r+1))/2 ;
        cout << sufSum-preSum << '\n';
    }
    else{
        ll preSum = ((l+1)*l)/2 ;
        ll  sufSum = (r*(r-1))/2 ;
        cout <<  preSum - sufSum  << '\n';
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