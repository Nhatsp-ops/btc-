#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> x>>n;
    double tong=0.0;
    long long mu=1;
    for(int k=1;k<=n;k++){
        mu*=x;
       double term=(2.0 * mu) / (k * (k + 1));
        tong+=term;
    }
    cout << tong;
    return 0;
}

