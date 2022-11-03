#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    int multi = (int)(n / (x * y));
    int mod = n % (x * y);

    int fullCnt = 0;
    for (int i = 1; i <= x * y; i++) {
        if (i % x == 0 || i % y == 0) {
            fullCnt++;
        }
    }

    int modCnt = 0;
    for (int i = 1; i <= n % (x * y); i++) {
        if (i % x == 0 || i % y == 0) {
            modCnt++;
        }
    }

    cout << fullCnt * multi + modCnt << endl;

    return 0;
}
