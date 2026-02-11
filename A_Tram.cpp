#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int stopage ;
    cin >> stopage ;
    
    int currentPassengers = 0 ;
    int maxCapacity = 0 ;

    for(int i=0; i<stopage; i++){
        int out , in ;
        cin >> out >> in ;
        currentPassengers = currentPassengers - out + in;
        if(currentPassengers > maxCapacity){
            maxCapacity = currentPassengers ;
        }
    }

    cout << maxCapacity << '\n' ;
    return 0 ;
}