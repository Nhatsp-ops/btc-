#include<bits/stdc++.h>
using namespace std;

void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}
int inmang(double a[],int n){
    int i=0,j=n-1;
while(i<j){
    if(a[i]!=a[j]) return 0;
    i++;
    j--;
}
 return 1;
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
cout <<inmang(a,n);
    return 0;}

















