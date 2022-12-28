#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000007;

int main() {
    ll x, y;
    cin >> x >> y;

    ll bunshi = 1;
    ll bunbo = 1;
    for (ll i = 1; i <= x + y; i++) {
        bunshi *= i;
        bunshi %= mod;
    }
    for (ll i = 1; i <= x; i++) {
        bunbo *= i;
        bunbo %= mod;
    }
    for (ll i = 1; i <= y; i++) {
        bunbo *= i;
        bunbo %= mod;
    }

    ll p = bunbo;
    ll answer = 1;
    for (ll i = 0; i < 30; i++) {
        if (((mod - 2) & (1 << i)) != 0) {
            answer *= p;
            answer %= mod;
        }
        p *= p;
        p %= mod;
    }

    cout <<  (bunshi * answer) % mod << endl;

    return 0;
}
