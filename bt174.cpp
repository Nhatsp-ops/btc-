#include <bits/stdc++.h>
using namespace std;

void lietKeCacCap(int a[], int n) {
    if (n <= 2) {
        cout << -1;
        return;
    }


    set<int> check(a, a + n);
    if (check.size() != n) {
        cout << -1;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] <= a[j]) {
                cout << "(" << a[i] << ", " << a[j] << ")\n";
            }
        }
    }
}

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    nhapMang(a, n);

    lietKeCacCap(a, n);

    return 0;
}
