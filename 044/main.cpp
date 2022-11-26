#include <iostream>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

vector<vector<ll>> v;
vector<ll> visited;
queue<ll> q;

void bfs() {
    while (!q.empty()) {
        ll pos = q.front();
        q.pop();
        for (ll i = 0; i < v[pos].size(); i++) {
            if (visited[v[pos][i]] == -1) {
                visited[v[pos][i]] = visited[pos] + 1;
                q.push(v[pos][i]);
            }
        }
    }
}

void solve() {
    for (ll i = 0; i <= v.size(); i++) {
        visited.push_back(-1);
    }
    visited[1] = 0;
    q.push(1);
    bfs();
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
        cout << visited[i] << endl;
    }

    return 0;
}
