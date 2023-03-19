#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const ll mod = 1000000007;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> p(n + 1, 1);
    for (ll i = 1; i <= n; i++) {
        p[i] = (2 * p[i - 1]) % mod;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += p[i] * v[i];
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}
