#include <iostream>
#include <vector>

#define ll long long int

using namespace std;

vector<int> v;

void mergeSort(int l, int r) {
    if (r - l == 1) {
        return;
    }

    int m = (l + r) / 2;
    mergeSort(l, m);
    mergeSort(m, r);

    int c1 = l, c2 = m, cnt = 0;

    vector<int> c(v.size());
    while (c1 != m || c2 != r) {
        if (c1 == m) {
            c[cnt] = v[c2];
            c2++;
        } else if (c2 == r) {
            c[cnt] = v[c1];
            c1++;
        } else {
            if (v[c1] < v[c2]) {
                c[cnt] = v[c1];
                c1++;
            } else {
                c[cnt] = v[c2];
                c2++;
            }
        }
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        v[l + i] = c[i];
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    mergeSort(0, n);

    for (int i = 0 ; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << v[i];
    }
    cout << endl;

    return 0;
}
