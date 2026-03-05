#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (!(cin >> t)) return 0;

    for (int caseNum = 1; caseNum <= t; ++caseNum) {

        double ab, ac, bc, ratio;
        cin >> ab >> ac >> bc >> ratio;

        double ad = ab * sqrt(ratio / (ratio + 1.0));

        cout << "Case " << caseNum << ": " << fixed << setprecision(10) << ad << "\n";
    }
    return 0 ;
}