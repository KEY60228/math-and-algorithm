#include <iostream>

#define ll long long

using namespace std;

const ll k = 1000;

int main() {
    ll n;
    cin >> n;

    ll k10 = n / (10 * k);
    ll k5 = (n % (10 * k)) / (5 * k);
    ll k1 = ((n % (10 * k)) % (5 * k)) / k;

    cout << k10 + k5 + k1 << endl;

    return 0;
}
