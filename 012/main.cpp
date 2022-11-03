#include <iostream>

#define ll long long int

using namespace std;

bool isPrime(ll n) {
    if (n <= 1) {
        return false;
    }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ll n;
    cin >> n;

    if (isPrime(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
