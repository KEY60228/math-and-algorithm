#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> vx(n);
    vector<ll> vy(n);
    for (ll i = 0; i < n; i++) {
        cin >> vx[i] >> vy[i];
    }

    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());

    ll part1 = 0;
    for (ll i = 0; i < n; i++) {
        part1 += vx[i] * (-n + 2LL * (i + 1) - 1LL);
    }

    ll part2 = 0;
    for (ll i = 0; i < n; i++) {
        part2 += vy[i] * (-n + 2LL * (i + 1) - 1LL);
    }

    cout << part1 + part2 << endl;

    return 0;
}
