#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000000;

struct Matrix {
    ll p[2][2] = {{0, 0}, {0, 0}};
};

Matrix Multiplication(Matrix A, Matrix B) {
    Matrix C;
    for (ll i = 0; i < 2; i++) {
        for (ll k = 0; k < 2; k++) {
            for (ll j = 0; j < 2; j++) {
                C.p[i][j] += A.p[i][k] * B.p[k][j];
                C.p[i][j] %= mod;
            }
        }
    }
    return C;
}

Matrix Power(Matrix A, ll n) {
    Matrix P = A;
    Matrix Q;
    bool flag = false;
    for (ll i = 0; i < 60; i++) {
        if ((n & (1LL << i)) != 0LL) {
            if (!flag) {
                Q = P;
                flag = true;
            } else {
                Q = Multiplication(Q, P);
            }
        }
        P = Multiplication(P, P);
    }
    return Q;
}

int main() {
    ll n;
    cin >> n;

    Matrix A;
    A.p[0][0] = 1;
    A.p[0][1] = 1;
    A.p[1][0] = 1;

    Matrix B = Power(A, n - 1);

    cout << (B.p[1][0] + B.p[1][1]) % mod << endl;

    return 0;
}
