#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >>x>> n;
    double tong=0;
    double gt=-1;
    double mu=1;
    for(int i=1;i<=n;i++){
       gt*=-1;
       mu*=x;
       tong+=gt*mu;
    }
    cout << tong;
    return 0;
}


