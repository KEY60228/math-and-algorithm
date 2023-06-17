#include <iostream>

#define ll long long

using namespace std;

bool shou_mondai(ll a, ll b, ll t) {
    ll cl = (a + t - 1) / t;
    ll cr = b / t;
    return cr - cl >= 1;
}

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = 0;
    for (ll i = 1; i <= b; i++) {
        if (shou_mondai(a, b, i)) {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
