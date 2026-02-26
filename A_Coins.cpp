#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , s ;
    cin >> n >> s ;

    int cnt = 0 ;
    
    int div = s/n ;
    int modd = s%n ;

    if(modd > 0) cnt++ ;
    
    cout << (div+cnt) ;
    return 0 ;
}   