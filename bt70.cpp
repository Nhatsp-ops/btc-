#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    double tong=0;
    double gt=-1;
    double mau=0;
    for(int i=1;i<=n;i++){
           mau+=i;
           gt*=-1;
       tong+=(1/mau)*gt;
    }
    cout << tong;
    return 0;
}





