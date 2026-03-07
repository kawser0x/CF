#include<bits/stdc++.h>
using namespace std ;

int sum(int l , int r){
    int sum = 0 ;
    for(int i=l+1; i<r; i++){
        if(i % 2 != 0){
            sum += i ;
        }
    }
    return sum ;
}

void solveSumOdd(){
    int l , r ;
    cin >> l >> r ;
    if(l < r){
        cout << sum(l,r)  << '\n';
    }
    else{
        cout << sum(r,l)  << '\n';
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        solveSumOdd();
    }
    return 0 ;
}