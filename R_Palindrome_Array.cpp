#include<bits/stdc++.h>
using namespace std ;
const int N = 1e5 + 5 ;

int arr[N];

bool isPal(int l , int r){
    if(l>=r){
        return true ;
    }
    if(arr[l] != arr[r]){
        return false ;
    }
    return isPal(l+1,r-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(isPal(0,n-1)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0 ;
}