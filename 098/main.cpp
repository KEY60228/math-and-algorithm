#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> x(n);
    vector<ll> y(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    ll a, b;
    cin >> a >> b;

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        ll xa = x[i] - a;
        ll ya = y[i] - b;
        ll xb = x[(i + 1) % n] - a;
        ll yb = y[(i + 1) % n] - b;
        if (ya > yb) {
            swap(xa, xb);
            swap(ya, yb);
        }
        if (ya <= 0 && 0 < yb && xa * yb - xb * ya < 0) {
            cnt++;
        }
    }

    if (cnt % 2 == 1) {
        cout << "INSIDE" << endl;
    } else {
        cout << "OUTSIDE" << endl;
    }

    return 0;
}
