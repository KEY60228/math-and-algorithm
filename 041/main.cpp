#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll t, n;
    cin >> t >> n;

    vector<ll> dp(t + 1, 0);
    for (ll i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        dp[l] += 1;
        dp[r] -= 1;
    }

    ll p = 0;
    for (ll i = 0; i < t; i++) {
        p += dp[i];
        cout << p << endl;
    }

    return 0;
}
