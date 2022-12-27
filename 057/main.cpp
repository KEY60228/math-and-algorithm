#include <iostream>

#define ll long long

using namespace std;

const ll mod = 1000000007;

ll Mat2[4][4] = {
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 0},
    {1, 0, 0, 1}
};

ll Mat3[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 1},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 1, 0, 0, 1, 0}
};

ll Mat4[16][16] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1}
};

struct Matrix {
    int size_ = 0;
    ll p[16][16];
};

Matrix Multiplication(Matrix A, Matrix B) {
    Matrix C;

    C.size_ = A.size_;
    for (ll i = 0; i < A.size_; i++) {
        for (ll j = 0; j < A.size_; j++) {
            C.p[i][j] = 0;
        }
    }

    for (ll i = 0; i < A.size_; i++) {
        for (ll k = 0; k < A.size_; k++) {
            for (ll j = 0; j < A.size_; j++) {
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
    ll k, n;
    cin >> k >> n;

    Matrix A;
    A.size_ = (1 << k);
    for (ll i = 0; i < (1 << k); i++) {
        for (ll j = 0; j < (1 << k); j++) {
            if (k == 2) {
                A.p[i][j] = Mat2[i][j];
            }
            if (k == 3) {
                A.p[i][j] = Mat3[i][j];
            }
            if (k == 4) {
                A.p[i][j] = Mat4[i][j];
            }
        }
    }

    Matrix B = Power(A, n);

    cout << B.p[(1 << k) - 1][(1 << k) - 1] << endl;

    return 0;
}
