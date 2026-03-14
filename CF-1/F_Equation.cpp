#include<bits/stdc++.h>
using namespace std ;

#define ll long long int 

ll contSum(int x , int n){
    ll cont = 0;
    for(int i=2; i<=n; i+=2){
        ll c = 1 ;
            for(int j=1; j<=i ; j++){
                c *= x ;
            }
            cont += c ;
            c = 1 ;
        }
    return cont ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, n ;
    cin >> x >> n ;

        ll sum = contSum(x,n);
        cout << sum ;

    return 0 ;
}