#include<bits/stdc++.h>
using namespace std;
void nhapmang(double a[],int n){
    double tong=0;
    double dem=0;
for(int i=0;i<n;i++){
    cin >> a[i];}
    for(int i=0;i<n-1;i++){
     for(int j=i+1;i<n;i++){
        tong+=abs(a[i]-a[j]);
        dem++;
     }
  }
cout << tong/dem;
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);

    return 0;
}






















