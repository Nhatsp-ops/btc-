#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n;
    if(sqrt(n)*sqrt(n)!=n)
     k= sqrt(n);
     else k=sqrt(n)-1;
    cout << k*k;
    return 0;
}


