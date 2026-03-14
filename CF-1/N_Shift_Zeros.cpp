#include<bits/stdc++.h>
using namespace std ;

void solve(int n){
    int arr[n];
    int cnt = 0 ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 0) cnt++ ;
    }
    for(int i=0; i<n; i++){
        if(arr[i] == 0) continue;
        else cout << arr[i] << " ";
    }
    for(int i=0; i<cnt; i++){
        cout << 0 << " ";
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