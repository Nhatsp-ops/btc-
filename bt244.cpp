#include<bits/stdc++.h>
using namespace std;
bool sht(int n){
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
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
int inmang(int a[],int n){
 for(int i=0;i<n;i++){
    if(a[i]>256) if(sht(a[i])) return 0;
 }
 return 1;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
cout <<inmang(a,n);
    return 0;}

















