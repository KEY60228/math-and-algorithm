#include <iostream>

#define ll long long int

using namespace std;

int main() {
    int n;
    cin >> n;

    ll answer = 1;
    for (int i = 1; i <= n; i++) {
        answer *= i;
    }

    cout << answer << endl;

    return 0;
}
