#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    getline(cin, s);

    int n = s.length();
    int start = 0 ;

    for(int i=0; i<=n; i++){
        if(i == n || s[i] == ' '){
            reverse(s.begin()+start, s.begin()+i);
            start = i + 1 ;
        }
        
    }
    cout << s ;
    
    // approch 2 
    // stringstream ss(s);
    // string word ;
    // while(ss >> word){
    //     reverse(word.begin() , word.end());
    //     cout << word << " " ;
    // }

    return 0 ;
}