#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long int

using namespace std;

int main() {
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll left = 0, right = n;
    while (left <= right) {
        ll mid = (left + right) / 2;
        if (v[mid] == x) {
            cout << "Yes" << endl;
            return 0;
        }
        if (v[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << "No" << endl;

    return 0;
}
