#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    int k = 1 ;
    for(int i=0; i<n; i++){
        for(int j = 1 ; j <= 4; j++){
            if(j%4 == 0){
                cout << "PUM";
            }
            else{
                cout << k << " ";
            }
            k++ ;
        }
        (i < n-1 )? cout << '\n' : cout << "";
    }
    return 0 ;
}