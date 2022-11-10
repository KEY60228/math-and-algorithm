#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int main() {
    ll n, s;
    cin >> n >> s;

    vector<bool> dp(s, false);
    dp[0] = true;
    for (ll i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        for (ll j = s - 1; j >= 0; j--) {
            if (dp[j]) {
                if (j + tmp == s) {
                    cout << "Yes" << endl;
                    return 0;
                }
                if (j + tmp < s) {
                    dp[j + tmp] = true;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
