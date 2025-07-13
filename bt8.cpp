#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double tong =0.0;
    double i=0.0;
    while(i <=2*n+1){
        tong+=i/(i+1.0);
        i+=2*i+1;
    }
    cout <<fixed<< setprecision(6) << tong;
    return 0;
}



