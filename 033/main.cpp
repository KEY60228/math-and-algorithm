#include <iostream>
#include <cmath>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    ll BAx = (ax - bx); ll BAy = (ay - by);
    ll BCx = (cx - bx); ll BCy = (cy - by);
    ll CAx = (ax - cx); ll CAy = (ay - cy);
    ll CBx = (bx - cx); ll CBy = (by - cy);

    double answer;
    if (BAx * BCx + BAy * BCy < 0) {
        answer = sqrt(pow(BAx, 2) + pow(BAy, 2));
    } else if (CAx * CBx + CAy * CBy < 0) {
        answer = sqrt(pow(CAx, 2) + pow(CAy, 2));
    } else {
        answer = abs(BAx * BCy - BAy * BCx) / sqrt(pow(BCx, 2) + pow(BCy, 2));
    }

    cout << fixed << setprecision(8) << answer << endl;

    return 0;
}
