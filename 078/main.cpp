#include <iostream>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n + 1);
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vector<ll> dist(n + 1, -1);
    queue<ll> q;
    q.push(1);
    dist[1] = 0;

    while(!q.empty()) {
        ll pos = q.front();
        q.pop();
        for (ll i = 0; i < v[pos].size(); i++) {
            ll nex = v[pos][i];
            if (dist[nex] == -1) {
                dist[nex] = dist[pos] + 1;
                q.push(nex);
            }
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (dist[i] == -1) {
            cout << 120 << endl;
        } else {
            if (dist[i] > 120) {
                cout << 120 << endl;
            } else {
                cout << dist[i] << endl;
            }
        }
    }

    return 0;
}
