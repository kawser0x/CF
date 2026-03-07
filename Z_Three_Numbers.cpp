#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k , s ;
    cin >> k >> s ;
    int cnt = 0 ;
    for(int i=0; i<=k; i++){
        for(int j=0 ; j<=k;j++){
            int l = s - i - j ;
            if (l >= 0 && l <= k) {
                cnt++;
            }
        }
    }

    cout << cnt ;
    return 0 ;
}