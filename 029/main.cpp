#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> dp(n + 1);
    for (ll i = 0; i <= n; i++) {
        if (i <= 1) {
            dp[i] = 1;
            continue;
        }
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    cout << dp[n] << endl;

    return 0;
}
