#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        ll s, e;
        cin >> s >> e;
        auto itr = m.find(e);
        if (itr == m.end() || itr->second < s) {
            m[e] = s;
        }
    }

    ll cnt = 0;
    ll now = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        if (now <= itr->second) {
            now = itr->first;
            itr = m.lower_bound(now);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
