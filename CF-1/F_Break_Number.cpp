#include<bits/stdc++.h>
using namespace std ;

#define ll long long 

int count(ll x){
    int cnt = 0; 
    if(x % 2 != 0){
        return 0 ;
    }
    if(x%2 == 0){
        cnt++ ;
    }
    return cnt + count(x/2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ma_x = 0 ;
    for(int i=0; i<n; i++){
        int countDiv = count(arr[i]);
        if(countDiv > ma_x){
            ma_x = countDiv ;
        }
    }
    cout << ma_x << '\n';

    return 0 ;
}