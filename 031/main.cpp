#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<pair<ll, bool>> dp(n + 1, {0, false});
    for (ll i = 1; i <= n; i++) {
        ll a;
        cin >> a;

        if (!dp[i - 1].second) {
            if (dp[i - 1].first < dp[i - 2].first + a) {
                dp[i].first = dp[i - 2].first + a;
                continue;
            }
        }

        dp[i].first = dp[i - 1].first;
        dp[i].second = false;
    }

    cout << dp[n].first << endl;

    return 0;
}
