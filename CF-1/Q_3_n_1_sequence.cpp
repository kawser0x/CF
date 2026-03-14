#include<bits/stdc++.h>
using namespace std ;

int cnt = 0 ;

void countValue(int n){
    if(n== 1){
        cnt++ ;
        return ;
    }
    if(n%2 == 0){
        cnt++ ;
        countValue(n/2);
    }
    else{
        cnt++;
        countValue(3*n+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    countValue(n);
    cout << cnt ;

    return 0 ;
}