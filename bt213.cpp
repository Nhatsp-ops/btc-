#include<bits/stdc++.h>
using namespace std;
void nhapmang(double a[],int n,int x){
    double tong=0;
    double dem=0;
for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i]>x){
    tong+=a[i];
    dem++;}
}
cout << tong/dem;
}

int main(){
    int n,x,y;
    cin >> n>>x;
double a[n];
nhapmang(a,n,x);

    return 0;
}





















