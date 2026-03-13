#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int dis , disP ;
    cin >> dis >> disP ;
    double total =(1.0)* (100*disP) / (100-dis);
    cout <<fixed << setprecision(2) << total ;
    return 0 ;
}