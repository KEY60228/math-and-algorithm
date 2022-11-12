#include <iostream>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    int n;
    cin >> n;

    double suma, sumb;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        suma += a;
    }
    for (int i = 0; i < n; i++) {
        double b;
        cin >> b;
        sumb += b;
    }

    cout << fixed << setprecision(8) << suma * 1 / 3 + sumb * 2 / 3 << endl;

    return 0;
}
