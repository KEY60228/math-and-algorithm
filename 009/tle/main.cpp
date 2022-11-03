#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < (1LL << n); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if ((i & (1LL << j)) != 0) {
                sum += v[j];
            }
        }
        if (sum == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
