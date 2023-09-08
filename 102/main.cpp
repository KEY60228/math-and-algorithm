#include <iostream>

#define ll long long

using namespace std;

ll ncr(ll x, ll y) {
    if (x < 3 && y < 3) {
        if (x < y) {
            return 0;
        }
        if (x == 2 && y == 1) {
            return 2;
        }
        return 1;
    }
    return ncr(x / 3, y / 3) * ncr(x % 3, y % 3) % 3;
}

int main() {
    ll n;
    string c;
    cin >> n >> c;

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll code = -1;
        if (c[i] == 'B') {
            code = 0;
        }
        if (c[i] == 'W') {
            code = 1;
        }
        if (c[i] == 'R') {
            code = 2;
        }
        ans += code * ncr(n - 1, i);
        ans %= 3;
    }

    if (n % 2 == 0) {
        ans = (3 - ans) % 3;
    }

    cout <<"BWR"[ans] << endl;

    return 0;
}
