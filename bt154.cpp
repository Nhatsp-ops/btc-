#include<bits/stdc++.h>
using namespace std;
int inmang(double a[],int n){
  int  max;
  int pos=-1;
  for(int i=0;i<n;i++){
    if(a[i]<0){
        max=a[i];
        pos=i;
        break;
    }
  }
  int posmax=pos;
 for(int i=pos;i <n;i++){
     if(a[i]>max && a[i]<0){
    max=a[i];
posmax=i;
}}
return posmax;
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












