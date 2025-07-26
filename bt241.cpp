
#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
int inmang(int a[],int n){
 for(int i=0;i<n-1;i++){
    if(a[i]==0&& a[i+1]==0) return 1;
 }
 return 0;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
cout <<inmang(a,n);
    return 0;}














