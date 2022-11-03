#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int answer = 0;
    for (int i = 1; i <= min(n, s); i++) {
        for (int j = 1; j <= min(n, s); j++) {
            if ((i + j) <= s) {
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
