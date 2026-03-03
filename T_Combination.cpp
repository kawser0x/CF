#include<bits/stdc++.h>
using namespace std ;
#define ll long long 

ll factorial(int n , int r){
    if( r > n || r < 0){
        return 0 ;
    }
    if(n == 0 || n == 1){
        return 1 ;
    }
    
    return factorial(n-1,r-1) + factorial(n-1,r) ;
}

// cNr = (N! / (r! * (n-r)!))
// nCr=((n−1),(r−1))+((n−1),r)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , r ;
    cin >> n >> r ;

    cout << factorial(n,r);
    return 0 ;
}