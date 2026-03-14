#include<bits/stdc++.h>
using namespace std ;
#define ll long long 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n ;
    cin >> n ;
    if(n == 1){
        cout << "YES";
        return 0 ;
    }
    ll sum = 1 ;
    bool is_sqr = false ;
    for(int i=0; i < 60 ; i++){
        sum *= 2 ;
        if(sum == n){
            is_sqr = true ;
            break ;
        }
    }
    (is_sqr) ? cout << "YES" : cout << "NO";
    return 0 ;
}