#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a , b ;
    cin >> a >> b ;
    if(a == 0 && b == 0){
        cout << "NO";
    }else if (abs(a-b) <= 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0 ;
}