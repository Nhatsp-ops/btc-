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

void inmang(int a[],int n){
    double tong=0;
    double dem=0;
for(int i=0;i<n;i++){
        if(a[i]%2==0){
           dem++; }

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








