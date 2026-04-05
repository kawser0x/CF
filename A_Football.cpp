#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    map<string,int> mp ;
    for(int i=0; i<n;i++){
        string s ;
        cin >> s ;
        mp[s]++ ;
    }
    string ss = "";
    int mx = 0 ;
    for(auto x : mp){
        if(x.second > mx){
            ss = x.first ;
            mx = x.second ;
        }
    }

    cout << ss << '\n';
    return 0 ;
}