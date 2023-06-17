#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        sum += tmp;
    }

    if (sum > k) {
        cout << "No" << endl;
    } else {
        if ((k - sum) % 2 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
