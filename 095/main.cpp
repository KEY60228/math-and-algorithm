#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> ap(n + 1, 0);
    vector<ll> bp(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        ll c, p;
        cin >> c >> p;
        if (c == 1) {
            ap[i + 1] = ap[i] + p;
            bp[i + 1] = bp[i];
        } else {
            ap[i + 1] = ap[i];
            bp[i + 1] = bp[i] + p;
        }
    }

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        cout << ap[r] - ap[l - 1] << " " << bp[r] - bp[l - 1] << endl;
    }

    return 0;
}
