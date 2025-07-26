#include<bits/stdc++.h>
using namespace std;
int inmang(int a[],int n){
  int  min;
  int pos;
  for(int i=0;i<n;i++){
    if(a[i]%2==0){
        min=a[i];
        pos=i;
        break;
    }
  }
 for(int i=pos;i <n;i++){
     if(a[i]<min && a[i]%2==0){
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










