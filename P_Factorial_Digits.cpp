#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    double fac = 0 ;
    for(int i=2; i<=n; i++){
        fac += log10(i);
    }
    long long dig = floor(fac)+1 ;
    cout << "Number of digits of " << n <<"! is " << dig;
    return 0 ;
}