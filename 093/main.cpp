#include <iostream>

#define ll long long

using namespace std;

const ll lim = 1000000000000000000;

ll gcd(ll x, ll y) {
    if (y != 0) {
        return gcd(y, x % y);
    }
    return x;
}

ll lcm(ll x, ll y) {
    ll d = gcd(x, y);
    return d * (x / d) * (y / d);
}

int main() {
    ll a, b;
    cin >> a >> b;

    if (a / gcd(a, b) > lim / b) {
        cout << "Large" << endl;
    } else {
        cout << a / gcd(a, b) * b << endl;
    }

    return 0;
}
