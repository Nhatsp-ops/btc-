#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> x>>n;
    double tong ;
    if(x>1){
        tong=(pow(x,n+1)-x)/(x-1);
    }else{tong=n*x;}
    cout << tong;
    return 0;
}

