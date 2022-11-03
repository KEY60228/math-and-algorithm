#include <iostream>

#define ll long long int

using namespace std;

void echoDivisors(ll n) {
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
            if (n / i != i) {
                cout << n / i << endl;
            }
        }
    }
}

int main() {
    ll n;
    cin >> n;

    echoDivisors(n);

    return 0;
}