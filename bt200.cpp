#include<bits/stdc++.h>
using namespace std;
void nhapmang(double a[],int n){
    double tong=0;
for(int i=0;i<n;i++){
    cin >> a[i];
    tong+=a[i];
}
cout << tong;
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);

    return 0;
}


















