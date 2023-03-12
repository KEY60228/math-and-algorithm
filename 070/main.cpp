#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

ll check_numpoints(vector<pair<ll, ll>> v, ll lx, ll rx, ll ly, ll ry) {
    ll cnt = 0;
    for (ll i = 0; i < v.size(); i++) {
        if (lx <= v[i].first && v[i].first <= rx && ly <= v[i].second && v[i].second <= ry) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ll n, K;
    cin >> n >> K;

    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    ll ans = 1LL << 62;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            for (ll k = 0; k < n; k++) {
                for (ll l = 0; l < n; l++) {
                    ll cl = v[i].first;
                    ll cr = v[j].first;
                    ll dl = v[k].second;
                    ll dr = v[l].second;
                    if (check_numpoints(v, cl, cr, dl, dr) >= K) {
                        ll area = 1LL * (cr - cl) * (dr - dl);
                        if (area < ans) {
                            ans = area;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
