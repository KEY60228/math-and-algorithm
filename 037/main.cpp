#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    long long ABx = Bx - Ax; long long ABy = By - Ay;
    long long ACx = Cx - Ax; long long ACy = Cy - Ay;
    long long ADx = Dx - Ax; long long ADy = Dy - Ay;
    long long CDx = Dx - Cx; long long CDy = Dy - Cy;
    long long CAx = Ax - Cx; long long CAy = Ay - Cy;
    long long CBx = Bx - Cx; long long CBy = By - Cy;

    long long crossABAC = ABx * ACy - ABy * ACx;
    long long crossABAD = ABx * ADy - ABy * ADx;
    long long crossCDCA = CDx * CAy - CDy * CAx;
    long long crossCDCB = CDx * CBy - CDy * CBx;

    if (crossABAC == 0 && crossABAD == 0 && crossCDCA == 0 && crossCDCB == 0) {
        pair<long long, long long> A = {Ax, Ay};
        pair<long long, long long> B = {Bx, By};
        pair<long long, long long> C = {Cx, Cy};
        pair<long long, long long> D = {Dx, Dy};
        if (A > B) {
            swap(A, B);
        }
        if (C > D) {
            swap(C, D);
        }
        if (max(A, C) <= min(B, D)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    }

    bool isAB = false, isCD = false;
    if (crossABAC >= 0 && crossABAD <= 0) {
        isAB = true;
    }
    if (crossABAC <= 0 && crossABAD >= 0) {
        isAB = true;
    }
    if (crossCDCA >= 0 && crossCDCB <= 0) {
        isCD = true;
    }
    if (crossCDCA <= 0 && crossCDCB >= 0) {
        isCD = true;
    }

    if (isAB && isCD) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
