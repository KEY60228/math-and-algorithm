#include <iostream>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    int n;
    cin >> n;

    double answer;
    for (int i = 0; i < n; i++) {
        double p, q;
        cin >> p >> q;
        answer += q / p;
    }

    cout << fixed << setprecision(8) << answer << endl;

    return 0;
}
