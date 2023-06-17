#include <iostream>
#include <queue>

#define ll long long

using namespace std;

int main() {
    ll n;
    string s;
    cin >> n >> s;

    queue<char> q;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '(') {
            q.push('(');
        }
        if (s[i] == ')') {
            char c = q.front();
            q.pop();
            if (c != '(') {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
