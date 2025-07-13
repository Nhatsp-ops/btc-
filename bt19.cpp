#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >>x>> n;
    double tong=1;
    double tu=x;
    double mau=1;
    for(int i=1;i<=n+1;i++){
            tong+=tu/mau;
            tu*=x*x;
        mau*=(2*i)*(2*i+1);

    }
    cout << tong;
    return 0;
}



