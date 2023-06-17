#include <iostream>
#include <vector>

#define ll long long

using namespace std;

ll GCD(ll x, ll y) {
    if (y != 0) {
        return GCD(y, x % y);
    }
    return x;
}

ll LCM(ll x, ll y) {
    ll d = GCD(x, y);
    return d * (x / d) * (y / d);
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(k);
    for (ll i = 0; i < k; i++) {
        cin >> v[i];
    }

    ll ans = 0;
    for (ll i = 1; i < (1 << k); i++) {
        ll cnt = 0;
        ll lcm = 1;
        for (ll j = 0; j < k; j++) {
            if ((i & (1 << j)) != 0) {
                cnt++;
                lcm = LCM(lcm, v[j]);
            }
        }
        ll num = n / lcm;
        if (cnt % 2 == 1) {
            ans += num;
        } else {
            ans -= num;
        }
    }

    cout << ans << endl;

    return 0;
}
