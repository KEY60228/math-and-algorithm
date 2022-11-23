#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> dp(n + 1, 0);
    ll p = 0;
    for (ll i = 2; i <= n; i++) {
        ll a;
        cin >> a;
        p += a;
        dp[i] = p;
    }

    ll m;
    cin >> m;

    ll answer = 0;
    ll f;
    cin >> f;

    for (ll i = 1; i < m; i++) {
        ll b;
        cin >> b;
        answer += abs(dp[b] - dp[f]);
        f = b;
    }

    cout << answer << endl;

    return 0;
}
