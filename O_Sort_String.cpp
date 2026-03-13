#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    char ch ;
    
    int fC[26] = {0};
    
    for(int i=0; i<n; i++){
        cin >> ch;
        fC[ch - 'a']++ ;
    }
    for(int i=0 ; i<26; i++){
        if(fC[i] > 0){
            cout << string(fC[i], (char)(i+'a'));
        }
    }
    return 0 ;
}