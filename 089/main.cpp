#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    if (c == 1) {
        cout << "No" << endl;
        return 0;
    }

    ll v = 1;
    for (ll i = 1; i <= b; i++) {
        if (a / c < v) {
            cout << "Yes" << endl;
            return 0;
        }
        v *= c;
    }

    cout << "No" << endl;

    return 0;
}
