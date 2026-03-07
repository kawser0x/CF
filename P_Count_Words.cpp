#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    getline(cin , s);

    for (int i = 0; i < s.length(); i++) {
        if (!isalpha(s[i])) {
            s[i] = ' ';
        }
    }

    int cnt = 0; 
    stringstream ss(s);
    string word ;
    while(ss >> word){
        cnt++ ;
    }
    cout << cnt ;
    return 0 ;
}