#include<bits/stdc++.h>
using namespace std;

void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(double a[],int n){
    bool found=false;
for(int i=0;i <n;i++){
        if(i==0) if(a[i+1]<a[i]) {cout << a[i]<< " ";found=1;}
        if(i==n-1) if(a[i-1]<a[i]) {cout << a[i]<< " ";found=1;}
        if(i!=0 && i!=n-1) if(a[i+1]<a[i]||a[i-1]<a[i]) {cout << a[i]<< " ";found=1;}
    }

if(!found) cout << "NOT FOUND";
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}







