#include <iostream>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

ll sx, sy, gx, gy;
vector<vector<ll>> m;

void bfs() {
    queue<pair<ll, ll>> q;
    m[sx][sy] = 0;
    q.push({sx, sy});
    while (!q.empty()) {
        pair<ll, ll> pos = q.front();
        q.pop();
        if (m[pos.first + 1][pos.second] < 0) {
            m[pos.first + 1][pos.second] = m[pos.first][pos.second] + 1;
            q.push({pos.first + 1, pos.second});
        }
        if (m[pos.first - 1][pos.second] < 0) {
            m[pos.first - 1][pos.second] = m[pos.first][pos.second] + 1;
            q.push({pos.first - 1, pos.second});
        }
        if (m[pos.first][pos.second + 1] < 0) {
            m[pos.first][pos.second + 1] = m[pos.first][pos.second] + 1;
            q.push({pos.first, pos.second + 1});
        }
        if (m[pos.first][pos.second - 1] < 0) {
            m[pos.first][pos.second - 1] = m[pos.first][pos.second] + 1;
            q.push({pos.first, pos.second - 1});
        }
    }
}

ll solve() {
    bfs();
    return m[gx][gy];
}

int main() {
    ll r, c;
    cin >> r >> c >> sx >> sy >> gx >> gy;
    sx--; sy--; gx--; gy--;

    for (ll i = 0; i < r; i++) {
        vector<ll> v;
        for (ll j = 0; j < c; j++) {
            char tmp;
            cin >> tmp;
            if (tmp == '#') {
                v.push_back(1LL << 60);
            } else {
                v.push_back(-1);
            }
        }
        m.push_back(v);
    }

    cout << solve() << endl;

    return 0;
}
