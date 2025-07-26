#include<bits/stdc++.h>
using namespace std;

void nhapmang(double a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}

void inmang(double a[],int n){
    int tong=0;
for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
           tong+=a[i];    }

}
cout << tong;
}

int main(){
    int n,x,y;
    cin >> n;
double a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}








