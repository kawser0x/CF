#include<bits/stdc++.h>
using namespace std ;

int countFib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1 ;
    }
    return countFib(n-1)+countFib(n-2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    int fib = countFib(n);
    cout << fib ;
    return 0 ;
}