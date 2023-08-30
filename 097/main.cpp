#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll l, r;
    cin >> l >> r;

    vector<ll> v(r - l + 1, true);

    if (l == 1) {
        v[0] = false;
    }

    for (ll i = 2; i * i <= r; i++) {
        ll min_value = ((l + i - 1) / i) * i;
        for (ll j = min_value; j <= r; j += i) {
            if (j == i) {
                continue;
            }
            v[j - l] = false;
        }
    }

    ll ans = 0;
    for (ll i = 0; i <= r - l; i++) {
        if (v[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
