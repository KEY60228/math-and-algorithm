#include <iostream>

#define ll long long int

using namespace std;

ll gcd(ll x, ll y) {
    while (x >= 1 && y >= 1) {
        if (x < y) {
            y = y % x;
        } else {
            x = x % y;
        }
    }
    if (x >= 1) {
        return x;
    }
    return y;
}

int main() {
    ll x, y;
    cin >> x >> y;
    
    cout << gcd(x, y) << endl;
    
    return 0;
}
