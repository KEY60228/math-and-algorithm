#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<ll> v;
    v.push_back(a * c);
    v.push_back(a * d);
    v.push_back(b * c);
    v.push_back(b * d);

    ll max = -1LL << 60;
    for (ll i = 0; i < v.size(); i++) {
        if (max < v[i]) {
            max = v[i];
        }
    }

    cout << max << endl;

    return 0;
}
