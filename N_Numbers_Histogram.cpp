#include<bits/stdc++.h>
using namespace std ;

void print(int n , char ch){
    for(int i=0 ; i<n; i++){
        cout << ch ;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char ch ;
    cin >> ch ;
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        print(arr[i] , ch);
        (i < n-1 ) ? cout << '\n' : cout << "";
    }
    return 0 ;
}