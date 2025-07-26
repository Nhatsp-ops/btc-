#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return 0;
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0) return 0;
}
return 1;
}
int inmang(double a[],int n){
  int  max=0;
  int pos;
  for(int i=0;i<n;i++){
    if(snt(a[i])){
        max=a[i];
        pos=i;
        break;
    }
  }
 for(int i=pos;i <n;i++){
     if(a[i]>max && snt(a[i])){
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












