#include <iostream>
#include <vector>
#include <tuple>
#include <iomanip>

using namespace std;

bool check(vector<tuple<double, double, double>> v, double x, double y) {
    for (int i = 0; i < v.size(); i++) {
        auto [a, b, c] = v[i];
        if (a * x + b * y > c) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<tuple<double, double, double>> v(n);
    for (int i = 0; i < n; i++) {
        double a, b, c;
        cin >> a >> b >> c;
        v[i] = {a, b, c};
    }

    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            auto [ai, bi, ci] = v[i];
            auto [aj, bj, cj] = v[j];
            if (ai * bj == aj * bi) {
                continue;
            }

            double px = (ci * bj - cj * bi) / (ai * bj - aj * bi);
            double py = (ci * aj - cj * ai) / (bi * aj - bj * ai);
            if (check(v, px - 0.00000001, py - 0.00000001)) {
                if (ans < (px + py)) {
                    ans = px + py;
                }
            }
        }
    }

    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}
