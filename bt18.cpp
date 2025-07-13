#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >>x>> n;
    double tong=1;
    double tu=1;
    double mau=1;
    for(int i=1;i<=n;i++){
            tu*=x*x;
        mau*=(2*i-1)*(2*i);
        tong+=tu/mau;
    }
    cout << tong;
    return 0;
}


