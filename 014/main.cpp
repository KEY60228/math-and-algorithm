#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

vector<ll> primeFactors(ll n) {
    vector<ll> v;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    if (n >= 2) {
        v.push_back(n);
    }
    return v;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> v = primeFactors(n);

    for (ll i = 0; i < v.size(); i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << v[i];
    }
    cout << endl;

    return 0;
}
