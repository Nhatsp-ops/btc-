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
int dem=0;
void inmang(int a[],int n){
 set<int> v={a,a+n};
 for(auto x:v){
    if(snt(x)) dem++;
 }
 cout << dem;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}














