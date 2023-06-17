#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000007;

int main() {
    ll n;
    cin >> n;

    cout << ((((1 + n) * n / 2) % mod) * (((1 + n) * n / 2) % mod)) % mod << endl;

    return 0;
}
