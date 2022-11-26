#include <iostream>
#include <vector>

#define ll long long

using namespace std;

vector<vector<ll>> v;
vector<bool> visited;

void dfs(ll pos) {
    visited[pos] = true;
    for (ll i = 0; i < v[pos].size(); i++) {
        if (!visited[v[pos][i]]) {
            dfs(v[pos][i]);
        }
    }
}

void solve() {
    for (ll i = 0; i < v.size(); i++) {
        visited.push_back(false);
    }
    dfs(1);
}

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

    solve();

    for (ll i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << "The graph is not connected." << endl;
            return 0;
        }
    }
    cout << "The graph is connected." << endl;

    return 0;
}
