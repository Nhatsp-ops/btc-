#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "BANG CUU CHUONG\n\n";

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cout << setw(2) << j << " x " << i << " = "
                 << setw(2) << j * i << "   ";
        }
        cout << '\n';
    }
    return 0;
}

