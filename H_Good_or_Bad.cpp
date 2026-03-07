#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        if(s.find("101") != string :: npos || s.find("010") != string :: npos){
            cout << "Good" << '\n';
        }
        else{
            cout << "Bad" << '\n';
        }
    }
    return 0 ;
}