#include<bits/stdc++.h>
using namespace std;
double inmang(double a[],int n,double x){
  double min=a[0];
  double kc=abs(a[0]-x);
  int pos=0;
  for(int i=1;i<n;i++){
    if(abs(a[i]-x)<kc){
        min=a[i];
        kc=abs(a[i]-x);
        pos=i;
    }
  }
  return pos;
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n;
    double x;
    cin >> x>>n;
double a[n];
nhapmang(a,n);
cout << inmang(a,n,x);
    return 0;
}














