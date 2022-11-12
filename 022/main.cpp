#include <iostream>
#include <map>

#define ll long long int

using namespace std;

const ll SUM = 100000;

ll factorial(ll n) {
    ll a = 1;
    for (ll i = 1; i <= n; i++) {
        a *= i;
    }
    return a;
}

int main() {
    ll n;
    cin >> n;

    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        m[a]++;
    }

    ll answer = 0;
    for (ll i = 1; i < SUM / 2; i++) {
        answer += (m[i] * m[SUM - i]);
    }

    ll hc = m[SUM / 2];
    if (hc >= 2) {
        // answer += factorial(hc) / (factorial(2) * factorial(hc - 2));
        answer += hc * (hc - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
