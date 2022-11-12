#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll answer = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            for (ll k = j + 1; k < n; k++) {
                for (ll l = k + 1; l < n; l++) {
                    for (ll m = l + 1; m < n; m++) {
                        if (v[i] + v[j] + v[k] + v[l] + v[m] == 1000) {
                            answer++;
                        }
                    }
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}
