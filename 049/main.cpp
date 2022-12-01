#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n + 2);
    v[0] = 1; v[1] = 1;
    for (ll i = 2; i < n; i++) {
        v[i] = (v[i - 2] + v[i - 1]) % 1000000007;
    }

    cout << v[n - 1] % 1000000007 << endl;

    return 0;
}
