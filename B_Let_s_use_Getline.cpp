#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    getline(cin , s);
    for(char c : s){
        if(c == '\\'){
            break ;
        }
        else{
            cout << c ;
        }
    }
    return 0 ;
}