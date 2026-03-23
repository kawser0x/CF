#include <iostream>
using namespace std;

bool isLucky(int num) {
    while (num > 0) {
        int last_digit = num % 10;
        if (last_digit != 4 && last_digit != 7) {
            return false; 
        }
        num /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    bool isAlmostLucky = false;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isLucky(i)) {
            isAlmostLucky = true;
            break;
        }
    }
    
    if (isAlmostLucky) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}