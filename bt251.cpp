#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
int dem=0;
int inmang(int a[],int n){
 set<int> v={a,a+n};
if(v.size()==1){
    return 1;
}else return 0;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
cout << inmang(a,n);
    return 0;}















