#include<bits/stdc++.h>
using namespace std ;

#define ll long long 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a , b ;
    cin >> a >> b ;
    if(a-b >=0){
        cout << a-b ;
    }
    else {
        cout << 0 ;
    }
    return 0 ;
}