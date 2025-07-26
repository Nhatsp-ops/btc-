#include<bits/stdc++.h>
using namespace std;

void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
double duongnn(double a[],int n){
  int  min=INT_MAX;
bool found=false;
  for(int i=0;i<n;i++){
    if(a[i]>0 && a[i]<min){
        min=a[i];
        found=true;
    }
  }
  if(found)
 return min;
 else return -1;
}
void inmang(double a[],int n){
    int duong_nn=duongnn(a,n);
    if(duong_nn==-1){
        cout << -1;
        return ;
    }
 for(int i=0;i <n;i++){
        if(a[i]==duong_nn) cout << i << " ";

}
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}



