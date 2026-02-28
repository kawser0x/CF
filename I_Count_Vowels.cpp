#include<bits/stdc++.h>
using namespace std ;

int countVowel(string &s , int len){
    
    if(len <= 0){
        return 0;
    }
    int cnt = 0 ;
    char c = tolower(s[len-1]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        cnt++ ;
    }
    
    return cnt + countVowel(s , len-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    getline(cin , s);
    
    int length = s.length();
    int count = countVowel(s,length);
    cout << count ;
    return 0 ;
}