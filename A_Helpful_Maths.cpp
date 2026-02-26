#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    cin >> s ;
    string newS = "" ;
    for(int i=0; i<s.length(); i+=2){
        newS += s[i];
    }
    sort(newS.begin(),newS.end()) ;
    for(int i=0; i<newS.length(); i++){
        cout << newS[i];
        if(i < newS.length()-1){
            cout << '+';
        }
    }
    
    return 0 ;
}