#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<double>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
}
void contang(int n,vector<double>& a){
    int maxtong=a[0];
    int tong=a[0];
    int start=0,end1=0,tstart=0;
for(int i=1;i<n;i++){
if(tong+a[i]<a[i]){
    tong=a[i];
    tstart=i;
}else{tong+=a[i];}

if(tong > maxtong){
    maxtong=tong;
    start=tstart;
    end1=i;
}
}
 for(int i=start;i<=end1;i++){
    cout << a[i]<<" ";
 }
 }
int main(){

int n,x,k;
    cin >> n;
    vector<double> a(n);
nhapmang(a,n);
contang(n,a);
    return 0;}












































