#include<bits/stdc++.h>
using namespace std;
void inmang(double a[],int n){
  int  min;
  int pos;
  for(int i=0;i<n;i++){
    if(a[i]>0){
        min=a[i];
        pos=i;
        break;
    }
  }
 for(int i=pos;i <n;i++){
     if(a[i]<min){
    min=a[i];
    pos=i;
}}
cout << min;
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
inmang(a,n);
    return 0;
}









