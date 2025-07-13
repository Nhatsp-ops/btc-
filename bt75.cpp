#include <bits/stdc++.h>
using namespace std;

bool lt2(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n;
    cin >> n;
    if(lt2(n))
        cout <<"YES";
    else cout << "NO";
    return 0;
}
