#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >>x>> n;
    double tong=0;
    double gt=-1;
    double mu=1;
    for(int i=1;i<=2*n+1;i+=2){
            gt*=-1;
             mu=pow(x,i);
       tong+=mu*gt;
    }
    cout << tong;
    return 0;
}




