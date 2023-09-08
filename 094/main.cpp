#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n, 1 << 20LL);
    vector<ll> b(n - 1);
    for (ll i = 0; i < n - 1; i++) {
        cin >> b[i];
    }

    for (ll i = b.size() - 1; i >= 0; i--) {
        if (a[i + 1] > b[i]) {
            a[i + 1] = b[i];
        }
        if (a[i] > b[i]) {
            a[i] = b[i];
        }
    }

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        cnt += a[i];
    }

    cout << cnt << endl;

    return 0;
}
