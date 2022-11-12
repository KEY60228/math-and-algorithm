#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> dp(n);
    for (ll i = 0; i < n; i++) {
        if (i == 0) {
            dp[i] = 0;
        }
        if (i == 1) {
            dp[i] = abs(v[i - 1] - v[i]);
        }
        if (i >= 2) {
            ll v1 = dp[i - 1] + abs(v[i - 1] - v[i]);
            ll v2 = dp[i - 2] + abs(v[i - 2] - v[i]);
            dp[i] = min(v1, v2);
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}
