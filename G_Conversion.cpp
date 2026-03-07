#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    cin >> s ;
    string ss = "";
    for(char ch : s){
        if(ch >= 'a' && ch <='z'){
            ss += toupper(ch);
        }
        else if(ch == ','){
            ss += " ";
        }
        else{
            ss += tolower(ch);
        }
    }
    cout << ss ;
    return 0 ;
}