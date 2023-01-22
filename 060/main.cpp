#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;

    if (n % 4 == 0) {
        cout << "Second" << endl;
    } else {
        cout << "First" << endl;
    }

    return 0;
}
