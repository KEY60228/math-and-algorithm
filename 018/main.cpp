#include <iostream>
#include <map>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        m[x]++;
    }

    cout << m[100] * m[400] + m[200] * m[300] << endl;

    return 0;
}
