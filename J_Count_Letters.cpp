#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    cin >> s ;
    map<char,int> m ;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++ ;
    }
    for(auto x : m){
        cout << x.first << " : " << x.second << '\n';
    }
    return 0 ;
}