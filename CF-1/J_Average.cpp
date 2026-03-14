#include<bits/stdc++.h>
using namespace std ;

void solve(int n){
    double sum = 0 ;
    double arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    double ave = sum / n ;

    cout << fixed << setprecision(7) << ave ;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    solve(n);
    return 0 ;
}