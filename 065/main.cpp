#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll h, w;
    cin >> h >> w;

    if (h == 1 || w == 1) {
        cout << 1 << endl;
    } else {
        ll half = h * w / 2;
        if (h % 2 == 0 || w % 2 == 0) {
            cout << half << endl;
        } else {
            cout << half + 1 << endl;
        }
    }

    return 0;
}
