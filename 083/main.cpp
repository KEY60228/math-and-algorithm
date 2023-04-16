#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> vc(n);
    for (ll i = 0; i < n; i++) {
        cin >> vc[i];
    }

    vector<ll> vs(n);
    for (ll i = 0; i < n; i++) {
        cin >> vs[i];
    }

    sort(vc.begin(), vc.end());
    sort(vs.begin(), vs.end());

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += abs(vc[i] - vs[i]);
    }

    cout << ans << endl;

    return 0;
}
