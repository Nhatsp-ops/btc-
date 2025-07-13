#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double tong =0.0;
    double i=1.0;
    while(i <=n){
        tong+=i/(i+1.0);
        i+=1.0;
    }
    cout <<fixed<< setprecision(6) << tong;
    return 0;
}


