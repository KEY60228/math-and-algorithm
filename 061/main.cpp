#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    for (ll i = 1; i <= 60; i++) {
        if (n == pow(2, i) - 1) {
            cout << "Second" << endl;
            return 0;
        }
    }

    cout << "First" << endl;
    return 0;
}
