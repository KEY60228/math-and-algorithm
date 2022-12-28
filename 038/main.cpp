#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n + 1);
    v[0] = 0;
    for (ll i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        v[i] = v[i - 1] + tmp;
    }

    for (ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }

    return 0;
}
