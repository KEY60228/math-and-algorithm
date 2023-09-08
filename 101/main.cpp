#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const ll mod = 1000000007;

vector<ll> fact(100009);

ll modpow(ll a, ll b, ll m) {
    ll p = a;
    ll ans = 1;
    for (ll i = 0; i < 30; i++) {
        if ((b & (1 << i)) != 0) {
            ans *= p;
            ans %= m;
        }
        p *= p;
        p %= m;
    }
    return ans;
}

ll division(ll a, ll b, ll m) {
    return (a * modpow(b, m - 2, m)) % m;
}

ll ncr(ll n, ll r) {
    return division(fact[n], fact[r] * fact[n - r] % mod, mod);
}

int main() {
    ll n;
    cin >> n;

    fact[0] = 1;
    for (ll i = 1; i <= 100000; i++) {
        fact[i] = 1LL * i * fact[i - 1] % mod;
    }

    for (ll i = 1; i <= n; i++) {
        ll ans = 0;
        for (ll j = 1; j <= (n + i - 1) / i; j++) {
            ans += ncr(n - (i - 1) * (j - 1), j);
            ans %= mod;
        }
        cout << ans << endl;
    }

    return 0;
}
