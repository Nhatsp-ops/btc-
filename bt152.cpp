
#include<bits/stdc++.h>
using namespace std;
bool sht(int n){
if (n < 2) return false;
int tong=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0 && i*i!=n){
            tong+=i+(n/i);
        }else if(n%i==0){tong+=i;}
    }
    if(tong-n==n){
         return 1;
    }else{return 0;}
}
int inmang(int a[],int n){
  int  min=0;
  int pos;
  for(int i=0;i<n;i++){
    if(sht(a[i])){
        min=a[i];
        pos=i;
        break;
    }
  }
 for(int i=pos;i <n;i++){
     if(a[i]<min && sht(a[i])){
    min=a[i];

}}
return min;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}
int main(){
    int n;
    cin >> n;
int a[n];
nhapmang(a,n);
cout << inmang(a,n);
    return 0;
}











