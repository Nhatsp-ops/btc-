#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
if(a<2) return 0;
for(int i=2;i<sqrt(a);i++){
    if(a%i==0)return 0;
}
return 1;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
int inmang(int a[],int n){
 for(int i=0;i<n;i++){
    if(snt(a[i])) return 1;
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
















