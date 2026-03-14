#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s ;
    cin >> s ;
    transform(s.begin(),s.end(),s.begin(), :: tolower);

    int arr[5] = {0};
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'e' ){
            arr[0]++ ;
        }
        else if(s[i] == 'g' ){
            arr[1]++;
        }
        else if(s[i] == 'y' ) arr[2]++ ;
        else if(s[i] == 'p' ) arr[3]++ ;
        else if(s[i] == 't') arr[4]++ ;
    }
    int minn = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i] < minn){
            minn = arr[i];
        }
    }

    cout << minn ;
    return 0 ;
}