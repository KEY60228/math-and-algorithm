#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000007;

ll modpow(ll a, ll b) {
    ll p = a;
    ll answer = 1;
    for (ll i = 0; i < 60; i++) {
        if ((b & (1LL << i)) != 0) {
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
    ll n;
    cin >> n;

    ll v = modpow(4, n + 1) - 1;
    ll answer = division(v, 3);

    cout << answer<< endl;
    return 0;
}
