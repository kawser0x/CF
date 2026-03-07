#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t ;
    while (t--){
        string s1 , s2 ;
        cin >> s1 >> s2 ;
        string ss  = "";
        int len1 = s1.length();
        int len2 = s2.length();
        int mi_n = min(len1, len2);
        for(int i=0; i<mi_n; i++){
            ss += s1[i] ;
            ss += s2[i];
        }
        if(len1 > len2){
            for(int i = mi_n; i < len1 ; i++){
                ss+= s1[i];
            }
        }
        else{
            for(int i = mi_n; i < len2 ; i++){
                ss += s2[i];
            }
        }

        cout << ss << '\n' ;
    }
    
    return 0 ;
}