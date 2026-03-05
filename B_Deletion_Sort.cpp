#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin >> n ;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    
    bool is_sort = true ;
    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]){
            is_sort = false  ;
            break ;
        }
    }
    if(is_sort){
        cout << n << '\n';
    }
    else {
        cout << 1 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0 ;
}