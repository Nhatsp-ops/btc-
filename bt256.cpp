#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(int a[],int n){
sort(a,a+n,cmp);
 for(int i=0;i<n;i++){
 cout << a[i]<< " ";
 }
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}


















