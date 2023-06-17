#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> first(n, -1);
    vector<ll> second(n, -1);

    ll cur = 1;
    for (ll i = 0; i < k; i++) {
        if (first[cur - 1] == -1) {
            first[cur - 1] = i;
        } else if (second[cur - 1] == -1) {
            second[cur - 1] = i;
        }

        if (second[cur - 1] != -1 && (k - first[cur - 1]) % (second[cur - 1] - first[cur - 1]) == 0) {
            break;
        }

        cur = v[cur - 1];
    }

    cout << cur << endl;

    return 0;
}
