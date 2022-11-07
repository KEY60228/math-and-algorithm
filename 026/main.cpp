#include <iostream>
#include <iomanip>

#define ll long long int

using namespace std;

int main() {
    int n;
    cin >> n;

    double answer;
    for (int i = n; i >= 1; i--) {
        answer += (double)n / i;
    }

    cout << fixed << setprecision(8) << answer << endl;

    return 0;
}
