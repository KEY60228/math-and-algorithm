#include <iostream>
#include <vector>

#define ll long long

using namespace std;

vector<vector<ll>> v;

int main() {
    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i <= n; i++) {
        vector<ll> tmp;
        v.push_back(tmp);
    }

    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    ll answer = 0;
    for (ll i = 1; i <= n; i++) {
        ll cnt = 0;
        for (ll j = 0; j < v[i].size(); j++) {
            if (i > v[i][j]) {
                cnt++;
            }
        }
        if (cnt == 1) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
