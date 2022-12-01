#include <iostream>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

vector<vector<pair<ll, ll>>> graph;
vector<ll> dist;
vector<bool> used;
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;

void dijkstra() {
    q.push({0, 0});
    while (!q.empty()) {
        ll pos = q.top().second;
        q.pop();
        if (used[pos]) {
            continue;
        }
        used[pos] = true;
        for (ll i = 0; i < graph[pos].size(); i++) {
            ll to = graph[pos][i].first;
            ll cost = dist[pos] + graph[pos][i].second;
            if (pos == 0) {
                cost = graph[pos][i].second;
            }
            if (dist[to] > cost) {
                dist[to] = cost;
                q.push({dist[to], to});
            }
        }
    }
}

ll solve(ll k) {
    for (ll i = 0; i < k; i++) {
        dist.push_back(1 << 30);
        used.push_back(false);
    }
    dijkstra();
    return dist[0];
}

int main() {
    ll k;
    cin >> k;

    for (ll i = 0; i < k; i++) {
        vector<pair<ll, ll>> tmp;
        graph.push_back(tmp);
    }

    for (ll i = 0; i < k; i++) {
        for (ll j = 0; j < 10; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            graph[i].push_back({(i * 10 + j) % k, j});
        }
    }

    cout << solve(k) << endl;

    return 0;
}
