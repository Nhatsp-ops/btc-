#include<bits/stdc++.h>
using namespace std;
double inmang(double a[],int n){
  int  max=0;
  int pos;
  for(int i=0;i<n;i++){
    if(a[i]<0){
        max=a[i];
        pos=i;
        break;
    }
   return 0;
  }
 for(int i=pos;i <n;i++){
     if(a[i]>max && a[i]<0){
    max=a[i];

}}
return max;
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n;
    cin >> n;
double a[n];
nhapmang(a,n);
cout << inmang(a,n);
    return 0;
}











