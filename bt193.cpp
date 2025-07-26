#include<bits/stdc++.h>
using namespace std;
bool lt3(int n){
     const int max3 = 1162261467;
     return n>0 && max3%n==0;
}
void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
void inmang(double a[],int n){
    bool found=false;
for(int i=0;i <n;i++){
    if(lt3(a[i])){
        cout << a[i]<< " ";
        found=1;
    }
    }

if(!found) cout << "NOT FOUND";
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}











