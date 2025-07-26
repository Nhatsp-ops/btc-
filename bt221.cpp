#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return false;
for(int i=2;i<a;i++){
    if(a%i==0)return false;
}
return 1;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}

int inmang(int a[],int n){
    int sole=0;
    int sochan=0;
for(int i=0;i<n;i++){
        if(a[i]%2==0){
           sochan++; }else if(a[i]%2!=0) sole++;

}
if(sochan>sole)return -1;
if(sole>sochan) return 1;
if(sole==sochan) return 0;
}
int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
cout << inmang(a,n);
    return 0;}











