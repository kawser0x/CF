#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout << "*" ;
        }
        (i<n-1)? cout << '\n' : cout << "";
    }
    return 0 ;
}