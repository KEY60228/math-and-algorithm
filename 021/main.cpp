#include <iostream>

#define ll long long int

using namespace std;

int main() {
    ll n, r;
    cin >> n >> r;

    ll fn = 1, fr = 1, fnr = 1;
    for (ll i = 1; i <= n; i++) {
        fn *= i;
    }
    for (ll i = 1; i <= r; i++) {
        fr *= i;
    }
    for (ll i = 1; i <= n - r; i++) {
        fnr *= i;
    }

    cout << fn / (fr * fnr) << endl;

    return 0;
}
