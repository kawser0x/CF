#include<bits/stdc++.h>
using namespace std ;

void solve(int  n){
    int arr1[n] ;
    int arr2[n] ;
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
        for(int i=0; i<n; i++){
        cin >> arr2[i];
    }

    for(int i = 0; i< n*2 ; i++){
        if(i < n){
            cout << arr2[i] << " ";
        }
        else{
            cout << arr1[i-n] << " ";
        }
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