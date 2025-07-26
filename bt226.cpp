#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(int a[],int n){
    double tong=0;
for(int i=0;i <n;i++){
        if(i==0) if(a[i+1]%2==0 &&a[i]%2==0) {tong++;}
        if(i==n-1) if(a[i-1]%2==0 &&a[i]%2==0) {tong++;}
        if(i!=0 && i!=n-1) if(a[i+1]%2==0 && a[i-1]%2==0&&a[i]%2==0) {tong++;}
    }
    cout << tong;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}











