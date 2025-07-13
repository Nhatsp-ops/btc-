#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int sum = 0;
    while (sum <= 10000) {
        sum += n;
        ++n;
    }
    cout << "So nho nhat de 1 + 2 + ... + n > 10000 la: " << (n - 1) << endl;
    return 0;
}
