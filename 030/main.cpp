#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

int main() {
    ll N, W;
    cin >> N >> W;

    vector<ll> v(N + 1), w(N + 1);
    for (ll i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, -(1LL << 60)));
    dp[0][0] = 0;

    for (ll i = 1; i <= N; i++) {
        for (ll j = 0; j <= W; j++) {
            if (j < w[i]) {
                dp[i][j] = dp[i - 1][j];
                continue;
            }
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }

    ll answer = 0;
    for (ll i = 0; i <= W; i++) {
        answer = max(answer, dp[N][i]);
    }
    cout << answer << endl;

    return 0;
}
