#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double tong=0.0;
    long long mau=1;
    for(int i=1;i<=n;i++){
        tong+=1.0/mau;
        mau+=i+1
        ;
    }
    cout << tong;
    return 0;
}

