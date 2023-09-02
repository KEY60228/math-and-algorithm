#include <iostream>
#include <vector>

#define ll long long

using namespace std;

vector<vector<ll>> g(100009);
vector<ll> v(100009);
vector<ll> dp(100009);

void dfs(ll pos) {
    v[pos] = true;
    dp[pos] = 1;
    for (ll i : g[pos]) {
        if (!v[i]) {
            dfs(i);
            dp[pos] += dp[i];
        }
    }
}

int main() {
    ll n;
    cin >> n;

    for (ll i = 0; i < n - 1; i++) {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1);

    ll ans = 0;
    for (ll i = 2; i <= n; i++) {
        ans += 1LL * dp[i] * (n - dp[i]);
    }

    cout << ans << endl;

    return 0;
}
