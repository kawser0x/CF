#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n ;
    cin >> n ;
    ll r = n/4 ;
    if(n < r ){
        cout << r << " " << n ;
        return 0 ;
    }
    ll c = -1 ;
    if(r%2 == 0){
       c = n - (r*4);
    }
    else{
        c = 3 - (n - (r*4));
    }
    cout << r << " " <<  c ;
    return 0 ;
}