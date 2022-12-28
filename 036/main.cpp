#include <iostream>
#include <cmath>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    double a, b, h, m;
    cin >> a >> b >> h >> m;

    double angleH = 30 * h + 0.5 * m;
    double angleM = 6 * m;

    double Hx = a * cos(angleH * M_PI / 180);
    double Hy = a * sin(angleH * M_PI / 180);
    double Mx = b * cos(angleM * M_PI / 180);
    double My = b * sin(angleM * M_PI / 180);

    cout << fixed << setprecision(10) << sqrt(pow(Mx - Hx, 2) + pow(My - Hy, 2)) << endl;

    return 0;
}
