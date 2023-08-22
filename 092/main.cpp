#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

vector<ll> divisors(ll n) {
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i) {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> v = divisors(n);
    ll mina = 1, minb = n;
    for (ll i = 0; i < (v.size() + 1) / 2; i++) {
        if (minb - mina > (n / v[i]) - v[i]) {
            mina = v[i];
            minb = n / v[i];
        }
    }

    cout << (mina + minb) * 2 << endl;

    return 0;
}
