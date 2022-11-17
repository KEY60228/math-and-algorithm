#include <iostream>
#include <cmath>

#define ll long long int

using namespace std;

int main() {
    double Ax, Ay, Ar, Bx, By, Br;
    cin >> Ax >> Ay >> Ar >> Bx >> By >> Br;

    double ABx = Bx - Ax;
    double ABy = By - Ay;
    double AB = sqrt(pow(ABx, 2) + pow(ABy, 2));

    if (AB > Ar + Br) {
        cout << 5 << endl;
    } else if (AB == Ar + Br) {
        cout << 4 << endl;
    } else if (AB + min(Ar, Br) == max(Ar, Br)) {
        cout << 2 << endl;
    } else if (AB + min(Ar, Br) < max(Ar, Br)) {
        cout << 1 << endl;
    } else {
        cout << 3 << endl;
    }

    return 0;
}
