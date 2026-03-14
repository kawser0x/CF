#include<bits/stdc++.h>
using namespace std ;

void solve(int n){
    set<int> s ;
    for(int i=0; i<n; i++){
        int x ; cin >> x ;
        s.insert(x);
    }
    cout << s.size();

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    solve(n);
    return 0 ;
}