#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}}

void inmang(int a[],int n){
    int tong=0;
for(int i=0;i<n;i++){
        string s=to_string(a[i]);
        if((s[0]-48)%2==0){
           tong+=a[i];    }

}
cout << tong;
}

int main(){
    int n,x,y;
    cin >> n;
int a[n];
nhapmang(a,n);
inmang(a,n);
    return 0;}







