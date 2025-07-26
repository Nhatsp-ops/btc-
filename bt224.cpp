#include<bits/stdc++.h>
using namespace std;
bool snt(int a){
int tong=0;
for(int i=1;i<sqrt(a);i++){
    if(a%i==0){
        tong+=i+(a/i);
    }
}
if(tong-a==a) return 1;
else return 0;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}

void inmang(int a[],int n){
    double tong=0;
    double dem=0;
for(int i=0;i<n;i++){
        if(snt(a[i])){
           tong+=a[i];
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









