
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> x>>n;
    double tong=0;
    double gt=1;
    double mu=x;
    double mau=1;
    for(int i=1;i<=n+1;i++){
             tong+=(mu/mau)*gt;
            mu*=x*x;
           mau*=(2*i)*(2*i+1);
           gt*=-1;

    }
    cout << tong;
    return 0;
}









