#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll mod = n % 4;
    if (mod == 1) {
        cout << 2 << endl;
    } else if (mod == 2) {
        cout << 4 << endl;
    } else if (mod == 3) {
        cout << 8 << endl;
    } else {
        cout << 6 << endl;
    }

    return 0;
}
