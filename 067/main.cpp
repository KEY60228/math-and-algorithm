#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll h, w;
    cin >> h >> w;

    vector<vector<ll>> v(h + 1, vector<ll>(w + 1, 0));
    for (ll i = 1; i <= h; i++) {
        for (ll j = 1; j <= w; j++) {
            cin >> v[i][j];
            v[i][0] += v[i][j];
            v[0][j] += v[i][j];
        }
    }

    vector<vector<ll>> ans(h, vector<ll>(w, 0));
    for (ll i = 0; i < h; i++) {
        for (ll j = 0; j < w; j++) {
            ans[i][j] = v[i + 1][0] + v[0][j + 1] - v[i + 1][j + 1];
        }
    }

    for (ll i = 0; i < h; i++) {
        for (ll j = 0; j < w; j++) {
            if (j != 0) {
                cout << " ";
            }
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}
