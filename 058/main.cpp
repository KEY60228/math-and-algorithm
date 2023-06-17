#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    if (abs(x) + abs(y) <= n && (abs(x) + abs(y)) % 2 == n % 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
