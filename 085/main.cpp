#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n, x, y;
    cin >> n >> x >> y;

    for (ll a = 1; a <= n; a++) {
        for (ll b = a; b <= n; b++) {
            for (ll c = b; c <= n; c++) {
                for (ll d = c; d <= n; d++) {
                    if (a + b + c + d == x && 1LL * a * b * c * d == y) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
