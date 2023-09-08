#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n, x;
    cin >> n >> x;

    ll cnt = 0;
    for (ll a = 1; a <= n; a++) {
        for (ll b = a + 1; b <= n; b++) {
            for (ll c = b + 1; c <= n; c++) {
                if (a + b + c == x) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
