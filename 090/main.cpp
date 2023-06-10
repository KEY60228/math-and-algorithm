#include <iostream>
#include <set>

#define ll long long

using namespace std;

set<ll> fm_cand;

ll f(ll m) {
    if (m == 0) {
        return 0;
    }
    ll ans = 1;
    while (m >= 1) {
        ans *= (m % 10);
        m /= 10;
    }
    return ans;
}

void solve(ll digit, ll m) {
    if (digit == 11) {
        fm_cand.insert(f(m));
        return;
    }

    ll min_value = (m % 10);
    for (ll i = min_value; i <= 9; i++) {
        solve(digit + 1, 10 * m + i);
    }
}

int main() {
    solve(0, 0);

    ll n, b;
    cin >> n >> b;

    ll ans = 0;
    for (ll fm: fm_cand) {
        ll m = fm + b;
        ll prod_m = f(m);
        if (m - prod_m == b && m <= n) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
