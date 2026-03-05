#include<bits/stdc++.h>
using namespace std ;

int cnt = 0 ;

void countDiv(long long n){
    if(n == 1){
        return ;
    }
    else{
        cnt++;
        countDiv(n/2);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n ;
    cin >> n ;
    countDiv(n);
    cout << cnt ;

    return 0 ;
}