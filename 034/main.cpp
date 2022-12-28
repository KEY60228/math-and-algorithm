#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    double answer = 1LL << 60;
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll ABx = v[j].first - v[i].first;
            ll ABy = v[j].second - v[i].second;
            answer = min(answer, sqrt(pow(ABx, 2) + pow(ABy, 2)));
        }
    }

    cout << fixed << setprecision(16) << answer << endl;

    return 0;
}
