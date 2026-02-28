#include<bits/stdc++.h>
using namespace std ;

const int N = 1e3+9;
int arr[N];
int newA[N];
int index = 0 ;

void addIndex(int n){
    
    if(n<0){
        return ;
    }
    if(n % 2 == 0){
        newA[index++] = arr[n] ;
    }
    addIndex(n-1);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;

    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }

    addIndex(n-1);

    for(int i=0; i<index; i++){
        cout << newA[i] << ' ';
    }
    return 0 ;
}