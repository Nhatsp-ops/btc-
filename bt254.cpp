#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
int dem=0;
int inmang(int a[],int n){
 int dem=0;
 int max=a[0];
 for(int i=1;i<n;i++){
    if(a[i]>max){
        dem++;
        max=a[i];
    }
 }
 return dem;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
cout << inmang(a,n);
    return 0;}
















