#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const ll WHITE = -1;
const ll RED = 1;
const ll BLUE = 2;

vector<vector<ll>> graph;
vector<pair<ll, ll>> sides;
vector<ll> colors;

void dfs(ll pos) {
    for (ll i = 0; i < graph[pos].size(); i++) {
        if (colors[graph[pos][i]] == WHITE) {
            if (colors[pos] == RED) {
                colors[graph[pos][i]] = BLUE;
            } else {
                colors[graph[pos][i]] = RED;
            }
            dfs(graph[pos][i]);
        }
    }
}

bool solve() {
    for (ll i = 0; i <= graph.size(); i++) {
        colors.push_back(WHITE);
    }

    for (ll i = 1; i <= graph.size(); i++) {
        if (colors[i] == WHITE) {
            colors[i] = RED;
            dfs(i);
        }
    }

    for (ll i = 0; i < sides.size(); i++) {
        if (colors[sides[i].first] == colors[sides[i].second]) {
            return false;
        }
    }
    return true;
}

int main() {
    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i <= n; i++) {
        vector<ll> tmp;
        graph.push_back(tmp);
    }

    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        sides.push_back({a, b});
    }

    if (solve()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
