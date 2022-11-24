#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        for (ll j = i; j <= n; j += i) {
            v[j]++;
        }
    }

    ll answer = 0;
    for (ll i = 1; i <= n; i++) {
        answer += i * v[i];
    }

    cout << answer << endl;

    return 0;
}
