#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ans += v[i - 1] * (-n + 2LL * i - 1LL);
    }

    cout << ans << endl;

    return 0;
}
