#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    int l = 0; 
    int r = n-1 ;
    for(int i=0 ; i<n ;i++){
        for(int j = 0 ;  j<n; j++){
            if(i == n/2 && j == n/2){
                cout << "X" ;
            }
            else if(i == j){
                cout << "\\";
            }
            else if((i + j)== n-1 ){
                cout << "/";
            }
            else{
                cout << '*';
            }
            
        }
        cout << '\n';
    }
    return 0 ;
}