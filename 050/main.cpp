#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000007;

int main() {
    ll a, b;
    cin >> a >> b;

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

    cout << answer << endl;

    return 0;
}
