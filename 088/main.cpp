#include <iostream>

#define ll long long

using namespace std;

const ll mod = 998244353;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll asum = (a * (a + 1) / 2) % mod;
    ll bsum = (b * (b + 1) / 2) % mod;
    ll csum = (c * (c + 1) / 2) % mod;

    ll absum = (asum * bsum) % mod;
    ll abcsum = (absum * csum) % mod;

    cout << abcsum << endl;

    return 0;
}
