#include <iostream>
#include <map>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        ll c;
        cin >> c;
        m[c]++;
    }

    cout << (m[1] * (m[1] - 1) / 2) + (m[2] * (m[2] - 1) / 2) + (m[3] * (m[3] - 1) / 2) << endl;

    return 0;
}
