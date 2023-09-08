#include <iostream>
#include <iomanip>

#define ll long long

using namespace std;

struct matrix {
    double x[3][3] = {
        {0.0, 0.0, 0.0},
        {0.0, 0.0, 0.0},
        {0.0, 0.0, 0.0}
    };
};

matrix multiplication(matrix a, matrix b) {
    matrix c;
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            for (ll k = 0; k < 3; k++) {
                c.x[i][j] += a.x[i][k] * b.x[k][j];
            }
        }
    }
    return c;
}

matrix power(matrix a, ll n) {
    matrix p = a;
    matrix q;
    bool flag = false;
    for (ll i = 0; i < 30; i++) {
        if ((n & (1 << i)) != 0) {
            if (!flag) {
                q = p;
                flag = true;
            } else {
                q = multiplication(q, p);
            }
        }
        p = multiplication(p, p);
    }
    return q;
}

int main() {
    ll q;
    cin >> q;

    for (ll i = 1; i <= q; i++) {
        double x, y, z;
        ll t;
        cin >> x >> y >> z >> t;

        matrix a;
        a.x[0][0] = 1.0 - x;
        a.x[2][0] = x;
        a.x[1][1] = 1.0 - y;
        a.x[0][1] = y;
        a.x[2][2] = 1.0 - z;
        a.x[1][2] = z;

        matrix b = power(a, t);
        double ansA = b.x[0][0] + b.x[0][1] + b.x[0][2];
        double ansB = b.x[1][0] + b.x[1][1] + b.x[1][2];
        double ansC = b.x[2][0] + b.x[2][1] + b.x[2][2];
        cout << setprecision(12) << fixed << ansA << " " << ansB << " " << ansC << endl;
    }

    return 0;
}
