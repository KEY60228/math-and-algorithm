#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n + 2);
    v[0] = 0;
    v[n + 1] = 0;
    for (ll i = 0; i < q; i++) {
        ll l, r, x;
        cin >> l >> r >> x;
        v[l] += x;
        v[r + 1] -= x;
    }

    for (ll i = 2; i <= n; i++) {
        if (v[i] > 0) {
            cout << "<";
        } else if (v[i] == 0) {
            cout << "=";
        } else {
            cout << ">";
        }
    }
    cout << endl;

    return 0;
}
