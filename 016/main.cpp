#include <iostream>

#define ll long long int

using namespace std;

ll gcd(ll x, ll y) {
    while (x >= 1 && y >= 1) {
        if (x < y) {
            y = y % x;
        } else {
            x = x % y;
        }
    }
    if (x >= 1) {
        return x;
    }
    return y;
}

int main() {
    int n;
    cin >> n;

    ll x, y;
    cin >> x >> y;

    ll answer = gcd(x, y);

    for (int i = 0; i < n - 2; i++) {
        ll z;
        cin >> z;
        answer = gcd(answer, z);
    }

    cout << answer << endl;
}
