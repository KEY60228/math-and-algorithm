#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000007;

ll modpow(ll a, ll b) {
    ll p = a;
    ll answer = 1;
    for (ll i = 0; i < 30; i++) {
        if ((b & (1 << i)) != 0) {
            answer *= p;
            answer %= mod;
        }
        p *= p;
        p %= mod;
    }
    return answer;
}

ll division(ll a, ll b) {
    return (a * modpow(b, mod - 2)) % mod;
}

int main() {
    ll x, y;
    cin >> x >> y;

    if (2 * y - x < 0 || 2 * x - y < 0) {
        cout << 0 << endl;
        return 0;
    }

    if ((2 * y - x) % 3 != 0 || (2 * x - y) % 3) {
        cout << 0 << endl;
        return 0;
    }

    ll bunshi = 1;
    ll bunbo = 1;
    ll a = (2 * y - x) / 3;
    ll b = (2 * x - y) / 3;
    for (ll i = 1; i <= a + b; i++) {
        bunshi *= i;
        bunshi %= mod;
    }
    for (ll i = 1; i <= a; i++) {
        bunbo *= i;
        bunbo %= mod;
    }
    for (ll i = 1; i <= b; i++) {
        bunbo *= i;
        bunbo %= mod;
    }

    cout << division(bunshi, bunbo) << endl;

    return 0;
}
