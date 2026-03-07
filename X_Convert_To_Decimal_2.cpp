#include<bits/stdc++.h>
using namespace std ;
#define ll long long 

void solveBi(){
    ll x ;
    cin >> x ;
    string s = bitset<32>(x).to_string();
    string ss = "";
    for(char c : s){
        if(c == '1'){
            ss += c ;
        }
    }
    bitset<32>bits(ss);
    ll valD = bits.to_ulong();
    cout << valD ;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        solveBi();
        (t > 0)? cout << '\n' : cout << "" ;
    }

    return 0 ;
}