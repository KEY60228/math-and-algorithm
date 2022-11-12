#include <iostream>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    double n;
    cin >> n;

    double suma, sumb;
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        suma += a;
        sumb += b;
    }

    cout << fixed << setprecision(8) << suma / n + sumb / n << endl;

    return 0;
}
