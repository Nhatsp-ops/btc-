#include<bits/stdc++.h>
using namespace std;
int inmang(double a[],int n,double x){
  double max=a[0];
  double kc=abs(a[0]-x);
  for(int i=1;i<n;i++){
    if(abs(a[i]-x)>kc){
        max=a[i];
        kc=abs(a[i]-x);
    }
  }
  return max;
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













