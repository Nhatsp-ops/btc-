#include <iostream>
using namespace std;

int main() {
    int n ,m;
    cin >> n;
    m=1;
    int sum = 0;
    while (sum < n) {
        sum += m;
        ++m;
    }
    m--;
    cout << m;
    return 0;
}

