#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> t(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> t[i];
    }

    ll sumT = 0;
    for (ll i = 1; i <= n; i++) {
        sumT += t[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(sumT + 1, false));
    dp[0][0] = true;

    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j <= sumT; j++) {
            if (j < t[i]) {
                if (dp[i - 1][j]) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = false;
                }
            } else {
                if (dp[i - 1][j] || dp[i - 1][j - t[i]]) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = false;
                }
            }
        }
    }

    ll ans = (1 << 30);
    for (ll i = 0; i <= sumT; i++) {
        if (dp[n][i]) {
            ll cooking_time;
            if (i > sumT - i) {
                cooking_time = i;
            } else {
                cooking_time = sumT - i;
            }
            if (ans > cooking_time) {
                ans = cooking_time;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
