#include<bits/stdc++.h>
using namespace std ;
#define ll long long 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    if(n==1){
        cout << 0 ;
        return 0 ;
    }
    if(n==2){
        cout <<0 << " "<< 1 ;
        return 0 ;
    }
    ll fst = 0 , sec = 1 ;
    cout << fst << " " << sec;
    for(int i = 3 ; i<= n ; i++){
        ll trd = sec+fst ;
        cout <<" " << trd;
        fst = sec ;
        sec = trd ;
        
    }
    return 0 ;
}