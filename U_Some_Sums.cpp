#include<bits/stdc++.h>
using namespace std ;

int getsum(int m , int l , int r){
    int n = m ;
    int sum = 0 ;
    while(n>0){
        int mod = n%10 ;
        n = n/10 ;
        sum += mod ;
    }

    if(sum >=l && sum <= r){

        return m ;
        
    }
    else{
        return 0 ;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , l , r ;
    cin >> n >> l >> r ;
    int sum = 0 ;
    for(int i=1; i<=n ; i++){
        sum += getsum(i,l,r);
    }
    cout << sum ;
    return 0 ;
}