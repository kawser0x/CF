#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n , k ;
    cin >> n >> k ;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(k > n){
        sort(arr,arr+n);
        cout << arr[0];
        return 0;
    }
    int minn = 2e9 ;
    for(int i=0; i<n; i++){
        int current = arr[i];
        if(current < minn){
            minn = current ;
        }
        if((i+1)%k == 0 || i == n-1){
            cout << minn << " ";
            minn = 2e9 ;
        }
    }
    return 0 ;
}