#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

bool isPrime(int num) {
    if (num <= 3) {
        return num > 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i+= 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> answer;
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            answer.push_back(i);
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}
