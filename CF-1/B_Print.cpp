#include<bits/stdc++.h>
using namespace std ;

void solve(int n){
    for(int i=1; i<=n; i++){
        cout << i ;
        (i<n)?cout << " " : cout << "";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    solve(n);
    return 0 ;
}